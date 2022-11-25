object Form9: TForm9
  Left = 196
  Top = 348
  Width = 581
  Height = 375
  Caption = 'b_2_Listado de Vendedores'
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
    Left = 160
    Top = 24
    Width = 183
    Height = 20
    Caption = 'Listado de vendedores'
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
    Width = 545
    Height = 128
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
    Top = 48
  end
  object Query1: TQuery
    Active = True
    DatabaseName = 'Tablas'
    SQL.Strings = (
      'Select'
      '  Vendedor."VenCod" As Codigo,'
      '  Vendedor."VenNom" As Nombre,'
      '  Vendedor."VenTel" As Telefono,'
      '  Vendedor."VenDom" As Domicilio'
      'From "Vendedor.db"'
      'As Vendedor')
    Left = 464
    Top = 64
  end
end
