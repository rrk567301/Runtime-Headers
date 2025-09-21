@class NSViewController;

@interface PassKitMacHelper.PaymentRequestViewInterface : NSObject {
    void /* unknown type, empty encoding */ navigationStack;
    void /* unknown type, empty encoding */ hostDelegate;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, readonly) NSViewController *viewController;
@property (nonatomic, retain) id serviceDelegate;

- (void)start;
- (void)invalidate;
- (void)stop;
- (id)init;
- (void).cxx_destruct;

@end
