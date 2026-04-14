@class _TtC16PassKitMacHelper27PaymentRequestViewInterface;

@interface PKPaymentRequestViewInterface : NSObject

@property (retain, nonatomic) _TtC16PassKitMacHelper27PaymentRequestViewInterface *wrappedInterface;
@property (readonly, nonatomic) id serviceDelegate;

- (id)viewController;
- (void)start;
- (void)invalidate;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;

@end
