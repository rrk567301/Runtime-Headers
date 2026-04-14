@class ChartUpdater, NSArray, PRSStockChartCardSection, NSButton, NSStackView;

@interface PRSStockChartSliceViewController : PRSCardSectionSliceViewController <ChartUpdaterDelegate>

@property (retain, nonatomic) ChartUpdater *chartUpdater;
@property (retain, nonatomic) NSArray *stockIntervalButtons;
@property (weak) NSButton *stockIntervalButtonOneDay;
@property (weak) NSButton *stockIntervalButtonOneWeek;
@property (weak) NSButton *stockIntervalButtonOneMonth;
@property (weak) NSButton *stockIntervalButtonThreeMonths;
@property (weak) NSButton *stockIntervalButtonSixMonths;
@property (weak) NSButton *stockIntervalButtonOneYear;
@property (weak) NSButton *stockIntervalButtonTwoYears;
@property (weak) NSStackView *stockIntervalButtonsRowView;
@property (retain, nonatomic) PRSStockChartCardSection *stockChartCardSection;

- (void).cxx_destruct;
- (double)height;
- (void)awakeFromNib;
- (void)chartUpdater:(id)a0 didReceiveStockChartData:(id)a1;
- (void)chartUpdater:(id)a0 didFailWithError:(id)a1;
- (id)initWithCardSection:(id)a0 nibName:(id)a1;
- (void)syncAttributes;
- (id)initWithStockChartCardSection:(id)a0;
- (void)stockIntervalTypeChanged:(id)a0;

@end
