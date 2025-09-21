@class NSString, SCROBrailleUIListView, AXDispatchTimer, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface SCROBrailleUIMainApp : SCROBrailleUIApp

@property (retain, nonatomic) SCROBrailleUIListView *appsListView;
@property (retain, nonatomic) SCROBrailleUIListView *inlineResultView;
@property (retain, nonatomic) SCROBrailleUIListView *popUpView;
@property (retain, nonatomic) NSString *calculatorResultCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dateTimeQueue;
@property (retain, nonatomic) AXDispatchTimer *dateTimeTimer;
@property (retain, nonatomic) NSDate *currentDateTime;

- (void)open;
- (id)views;
- (void)close;
- (void).cxx_destruct;
- (void)handleAction:(id)a0;
- (void)_sendAnalytics;
- (BOOL)_isOpen;
- (void)_runTimerUpdate;
- (void)_handleActionInLaunchAppResult:(id)a0;
- (id)_stringBySanitizingWhitespaces:(id)a0;
- (id)_calculatorFormatter;
- (void)_closeInLineResult;
- (void)_closePopUp;
- (id)_currentDateTimeListItemWithDetails:(BOOL)a0;
- (void)_handleActionInAppList:(id)a0;
- (void)_handleActionInChooseItemResult:(id)a0;
- (void)_handleActionInNemethCalculatorResult:(id)a0;
- (void)_handleActionInPopUp:(id)a0;
- (BOOL)_hasPopUp;
- (long long)_indexForMenuItem:(unsigned long long)a0;
- (BOOL)_isInputBraille:(id)a0 partOfText:(id)a1;
- (BOOL)_isShowingInlineResult;
- (id)_mathCodeForPrintNumber:(id)a0;
- (id)_nemethForPrintNumber:(id)a0;
- (void)_setUpDateTimeTimer;
- (void)_showInlineResultWithIdentifier:(id)a0 items:(id)a1;
- (void)_showMatchingResultWithIdentifier:(id)a0 fromArray:(id)a1 withDecodingMap:(id /* block */)a2;
- (void)_showPopUpWithIdentifier:(id)a0 Key:(id)a1;
- (id)_uebMathForPrintNumber:(id)a0;
- (void)_updateDateTimeView;
- (void)handleResponse:(id)a0 forRequest:(id)a1;
- (void)navigateToMenuItem:(unsigned long long)a0;

@end
