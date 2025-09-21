@interface CRKCatalystNetworkPowerAssertion : NSObject <CATCancelable>

@property (nonatomic, getter=isCanceled) char canceled;

- (void)dealloc;
- (void)cancel;

@end
