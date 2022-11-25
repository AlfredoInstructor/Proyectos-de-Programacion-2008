object Form11: TForm11
  Left = 197
  Top = 415
  Width = 544
  Height = 375
  Caption = 'b_4_Listado de Precios'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 192
    Top = 8
    Width = 148
    Height = 20
    Caption = 'Listado de precios'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 16
    Top = 144
    Width = 497
    Height = 144
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object DataSource1: TDataSource
    DataSet = Query1
    Left = 416
    Top = 88
  end
  object Query1: TQuery
    Active = True
    DatabaseName = 'Tablas'
    SQL.Strings = (
      'Select'
      '  Articulos."ArtCod" As Codigo,'
      '  Articulos."ArtDes" As Descripcion,'
      '  Articulos."ArtPreVnt" As Precio_Venta'
      'From "Articulos.db"'
      'As Articulos')
    Left = 456
    Top = 96
  end
end
