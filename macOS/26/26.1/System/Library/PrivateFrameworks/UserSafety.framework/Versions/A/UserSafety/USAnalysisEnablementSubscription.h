@class SCSensitivityAnalysisAvailabilityObserver;

@interface USAnalysisEnablementSubscription : NSObject {
    SCSensitivityAnalysisAvailabilityObserver *_analysisAvailabilityObserver;
}

- (id)initWithObserver:(id)a0;
- (void)cancel;
- (void).cxx_destruct;

@end
