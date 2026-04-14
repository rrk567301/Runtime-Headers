@protocol MOCancellable;

@interface SCSensitivityAnalysisAvailabilityObserver : NSObject {
    id<MOCancellable> _subscription;
}

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithSubscription:(id)a0;

@end
