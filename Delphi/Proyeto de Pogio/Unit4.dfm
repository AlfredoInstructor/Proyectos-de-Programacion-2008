object Form4: TForm4
  Left = 194
  Top = 199
  Width = 544
  Height = 375
  Caption = '4_Listados de Compras pod Dia'
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
    Top = 8
    Width = 225
    Height = 20
    Caption = 'Listado de Compras Por Dia'
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
    Width = 473
    Height = 177
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
    Left = 400
    Top = 64
  end
  object Query1: TQuery
    Active = True
    DatabaseName = 'Tablas'
    SQL.Strings = (
      
        'Select  CmpFch As Fecha, SUM(CmpSTot) As SubTotal,  Sum(CmpImp) ' +
        'As Impuesto, SUM(CmpTot) As Total from Compra group by CmpFch or' +
        'der by CmpFch')
    Left = 464
    Top = 64
  end
end
