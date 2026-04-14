@class NSDate;

@interface JavaScriptDialogSuppressionManager : NSObject {
    BOOL _suppressing;
    NSDate *_dateLastDialogWasDismissed;
    double _monitoredIntervalForOfferingSuppression;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)canRunDialog;
- (BOOL)shouldOfferToSuppressDialogs;
- (void)suppressDialogs;
- (void)didRunDialog;
- (void)_test_setMonitoredIntervalForOfferingSuppression:(double)a0;

@end
