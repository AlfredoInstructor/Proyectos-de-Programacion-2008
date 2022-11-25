object Form2: TForm2
  Left = 193
  Top = 138
  Width = 544
  Height = 375
  Caption = '2_Listado de Ventas Contable'
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
    Width = 224
    Height = 20
    Caption = 'Listado de Ventas Contable'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 32
    Top = 136
    Width = 481
    Height = 137
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
    Left = 448
    Top = 64
  end
  object Query1: TQuery
    Active = True
    DatabaseName = 'Tablas'
    Constrained = True
    SQL.Strings = (
      'Select'
      '  Ventas."VntNum" As Factura,'
      '  Ventas."VntFch" As Fecha,'
      '  Ventas."VntSTot" As SubTotal,'
      '  Ventas."VntImp" As Impuesto,'
      '  Ventas."VntTot" As Total'
      'From "Ventas.db"'
      'As Ventas')
    Left = 392
    Top = 56
  end
end
