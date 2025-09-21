@class SCSensitivityAnalysisAvailabilityObserver;

@interface USAnalysisEnablementSubscription : NSObject {
    SCSensitivityAnalysisAvailabilityObserver *_analysisAvailabilityObserver;
}

- (void)cancel;
- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;

@end
