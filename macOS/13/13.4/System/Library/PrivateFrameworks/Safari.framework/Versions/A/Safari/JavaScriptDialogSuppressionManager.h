@class NSDate;

@interface JavaScriptDialogSuppressionManager : NSObject {
    BOOL _suppressing;
    NSDate *_dateLastDialogWasDismissed;
    double _monitoredIntervalForOfferingSuppression;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)suppressDialogs;
- (void)_test_setMonitoredIntervalForOfferingSuppression:(double)a0;
- (BOOL)canRunDialog;
- (void)didRunDialog;
- (BOOL)shouldOfferToSuppressDialogs;

@end
