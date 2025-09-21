@interface PKPaymentSheetExperiment : PKExperiment

@property (readonly, nonatomic) char isAA;
@property (readonly, nonatomic) char isTaggedForHideDoubleClickToPay;
@property (readonly, nonatomic) char shouldHideDoubleClickToPay;
@property (readonly, nonatomic) double timeIntervalToShowDoubleClickToPay;
@property (readonly, nonatomic) char isTaggedForAllowInAppPaymentFailureRetry;
@property (readonly, nonatomic) char shouldAllowInAppPaymentFailureRetry;
@property (readonly, nonatomic) char isTaggedForLineItemsInMainPaymentSheet;
@property (readonly, nonatomic) char shouldShowLineItemsInMainPaymentSheet;

- (id)namespaceName;

@end
