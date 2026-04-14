@protocol AMSUIPurchaseDelegate;

@interface AMSUIPurchaseTask : AMSPurchaseTask

@property (weak) id<AMSUIPurchaseDelegate> delegate;

+ (BOOL)isPaymentSheetEnablementAvailable;

- (Class)paymentSheetTaskClass;

@end
