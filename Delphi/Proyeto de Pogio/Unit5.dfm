object Form5: TForm5
  Left = 196
  Top = 230
  Width = 544
  Height = 375
  Caption = '5_Total de Ventas por mes'
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
    Left = 104
    Top = 8
    Width = 298
    Height = 20
    Caption = 'Listado Resumen de Ventas Por Mes'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 64
    Width = 481
    Height = 249
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
    Top = 24
  end
  object Query1: TQuery
    Active = True
    DatabaseName = 'Tablas'
    SQL.Strings = (
      
        'Select  CmpMes As Mes ,SUM(CmpSTot) As SubTotal,  Sum(CmpImp) As' +
        ' Impuestos, SUM(CmpTot) As TOTAL from Compra group by CmpMes')
    Left = 448
    Top = 40
  end
end
