object Form7: TForm7
  Left = 197
  Top = 269
  Width = 544
  Height = 375
  Caption = '6_Listado Resumen Mensual de Compras'
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
    Width = 248
    Height = 20
    Caption = 'Resumen de Compras Por Mes'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 40
    Top = 128
    Width = 433
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
    Left = 392
    Top = 48
  end
  object Query1: TQuery
    Active = True
    DatabaseName = 'Tablas'
    SQL.Strings = (
      
        'Select  CmpMes As Mes ,SUM(CmpSTot) As SubTotal,  Sum(CmpImp) As' +
        ' Impuestos, SUM(CmpTot) As TOTAL from Compra group by CmpMes')
    Left = 440
    Top = 64
  end
end
