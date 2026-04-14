@class NSMutableArray;

@interface KHAlertManagerDeferralQueue : NSProxy {
    NSMutableArray *_deferredInvocations;
}

@property (readonly, nonatomic) unsigned long long numberOfDeferredAlerts;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)pop;

@end
