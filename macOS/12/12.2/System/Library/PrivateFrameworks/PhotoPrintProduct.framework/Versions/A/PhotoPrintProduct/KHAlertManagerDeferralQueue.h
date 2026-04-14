@class NSMutableArray;

@interface KHAlertManagerDeferralQueue : NSProxy {
    NSMutableArray *_deferredInvocations;
}

@property (readonly, nonatomic) unsigned long long numberOfDeferredAlerts;

- (void)dealloc;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)pop;

@end
