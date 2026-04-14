@class SCSensitivityAnalysisAvailabilityObserver;

@interface USAnalysisEnablementSubscription : NSObject {
    SCSensitivityAnalysisAvailabilityObserver *_analysisAvailabilityObserver;
}

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;

@end
