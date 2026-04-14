@class NSMutableArray;

@interface KHAlertManagerDeferralQueue : NSProxy {
    NSMutableArray *_deferredInvocations;
}

@property (readonly, nonatomic) unsigned long long numberOfDeferredAlerts;

- (id)pop;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (void)dealloc;

@end
