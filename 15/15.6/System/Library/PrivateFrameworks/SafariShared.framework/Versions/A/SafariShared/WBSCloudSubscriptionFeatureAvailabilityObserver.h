@class CloudFeatureObject, NSString, NSObject, FeatureChangeObserver;
@protocol OS_dispatch_queue;

@interface WBSCloudSubscriptionFeatureAvailabilityObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_featureIdentifier;
    FeatureChangeObserver *_changeObserverToken;
    CloudFeatureObject *_featureObject;
    char _isEligible;
}

@property (class, readonly, nonatomic) WBSCloudSubscriptionFeatureAvailabilityObserver *provisionNewHideMyEmailAvailabilityObserver;
@property (class, readonly, nonatomic) WBSCloudSubscriptionFeatureAvailabilityObserver *porcupineAvailabilityObserver;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFeatureIdentifier:(id)a0;
- (char)_overridenAvailability;
- (void)_requestFeatureEligibilityBlockingQueueUntilResponse:(char)a0;
- (void)_requestFeatureObjectBlockingQueueUntilResponse:(char)a0;
- (void)getFeatureAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void)getFeatureEligibilityWithCompletionHandler:(id /* block */)a0;

@end
