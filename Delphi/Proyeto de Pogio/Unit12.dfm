object Form12: TForm12
  Left = 195
  Top = 453
  Width = 563
  Height = 375
  Caption = 'b_5_Listado de Articulos de todos los locales o Depositos'
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
    Left = 152
    Top = 8
    Width = 268
    Height = 20
    Caption = 'Listado de Articulos por Deposito'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 88
    Width = 521
    Height = 209
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
    Left = 352
    Top = 32
  end
  object Query1: TQuery
    Active = True
    DatabaseName = 'Tablas'
    SQL.Strings = (
      'Select'
      '  Articulos."ArtCod" As Codigo,'
      '  Articulos."ArtDes" As Descripcion,'
      '  Articulos."ArtStk" As Stock,'
      '  Articulos."DepCod" As Deposito, '
      ' Deposito."DepNom" As Nombre'
      'From "Articulos.db" As Articulos, "Deposito.db" As Deposito'
      'where Articulos."DepCod" = Deposito."DepCod"'
      'Order by Articulos."DepCod"')
    Left = 432
    Top = 48
  end
end
