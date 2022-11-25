object Form1: TForm1
  Left = 192
  Top = 114
  Width = 544
  Height = 375
  Caption = '1_Listado de Compras'
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
    Width = 238
    Height = 20
    Caption = 'Listado de Compras Contable'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 64
    Top = 168
    Width = 425
    Height = 120
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
    Left = 384
    Top = 88
  end
  object Query1: TQuery
    Active = True
    DatabaseName = 'Tablas'
    SQL.Strings = (
      'Select'
      '  Compra."CmpNum" As Factura,'
      '  Compra."CmpFch" as Fecha,'
      '  Compra."CmpSTot" as SubTotal,'
      '  Compra."CmpImp" As Impuestos,'
      '  Compra."CmpTot" As Total'
      'From "Compra.db"'
      'As Compra'
      ' ')
    Left = 272
    Top = 88
  end
end
