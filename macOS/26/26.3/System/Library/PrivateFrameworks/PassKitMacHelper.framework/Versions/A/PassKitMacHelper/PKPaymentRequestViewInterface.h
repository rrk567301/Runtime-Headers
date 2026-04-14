@class _TtC16PassKitMacHelper27PaymentRequestViewInterface;

@interface PKPaymentRequestViewInterface : NSObject

@property (retain, nonatomic) _TtC16PassKitMacHelper27PaymentRequestViewInterface *wrappedInterface;
@property (readonly, nonatomic) id serviceDelegate;

- (void)invalidate;
- (id)viewController;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;

@end
