object Form10: TForm10
  Left = 196
  Top = 380
  Width = 557
  Height = 375
  Caption = 'b_3_Listado de Provedores'
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
    Left = 184
    Top = 8
    Width = 189
    Height = 20
    Caption = 'Listado de proveedores'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 120
    Width = 537
    Height = 185
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
    Left = 376
    Top = 48
  end
  object Query1: TQuery
    Active = True
    DatabaseName = 'Tablas'
    SQL.Strings = (
      'Select'
      '  Acreedor."AcrCod" As Codigo,'
      '  Acreedor."AcrNom" As Nombre,'
      '  Acreedor."AcrDir" As Direccion,'
      '  Acreedor."AcrTel" As Telefono'
      'From "Acreedor.db"'
      'As Acreedor')
    Left = 448
    Top = 64
  end
end
