@class _TtC16PassKitMacHelper27PaymentRequestViewInterface;

@interface PKPaymentRequestViewInterface : NSObject

@property (retain, nonatomic) _TtC16PassKitMacHelper27PaymentRequestViewInterface *wrappedInterface;
@property (readonly, nonatomic) id serviceDelegate;

- (void)invalidate;
- (void)stop;
- (id)viewController;
- (void).cxx_destruct;
- (void)start;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;

@end
