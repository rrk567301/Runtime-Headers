@class NSWindow;
@protocol AMSUIPurchaseDelegate;

@interface AMSUIPurchaseSIWATask : AMSPurchaseSIWATask

@property (weak) id<AMSUIPurchaseDelegate> delegate;
@property (readonly) NSWindow *presentingWindow;

- (Class)paymentSheetTaskClass;
- (void).cxx_destruct;
- (id)newAuthorizationController;
- (id)initWithPurchaseSIWA:(id)a0 presentingWindow:(id)a1 bag:(id)a2;

@end
