@class NSMutableArray;

@interface KHAlertManagerDeferralQueue : NSProxy {
    NSMutableArray *_deferredInvocations;
}

@property (readonly, nonatomic) unsigned long long numberOfDeferredAlerts;

- (id)pop;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;

@end
