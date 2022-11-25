object Form13: TForm13
  Left = 196
  Top = 486
  Width = 544
  Height = 375
  Caption = 'b_6_Inventario de Articulos por linea'
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
    Left = 136
    Top = 0
    Width = 261
    Height = 20
    Caption = 'Inventario de Articulos por Linea'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 96
    Width = 529
    Height = 169
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
    Left = 408
    Top = 8
  end
  object Query1: TQuery
    Active = True
    DatabaseName = 'Tablas'
    Constrained = True
    SQL.Strings = (
      'Select'
      '  Articulos."ArtCod" as Codigo,'
      '  Articulos."ArtDes" as Descripcion,'
      '  Articulos."LinCod" as Linea,'
      '  Lineas."LinNom" as Nombre '
      'From "Articulos.db" As Articulos, "Lineas.db" As  Lineas'
      'Where Articulos."LinCod"=Lineas."LinCod"'
      'Order by Articulos."LinCod"')
    Left = 456
    Top = 16
  end
end
