object Form6: TForm6
  Left = 190
  Top = 271
  Width = 544
  Height = 375
  Caption = '5_Listado Resumen Mensual de Ventas'
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
    Left = 16
    Top = 120
    Width = 449
    Height = 193
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
      
        'Select  VntMes As Mes ,SUM(VntSTot) As SubTotal,  Sum(VntImp) As' +
        ' Impuestos, SUM(VntTot) As TOTAL from Ventas  group by VntMes')
    Left = 472
    Top = 96
  end
end
