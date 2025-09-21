@class NSString, NSNumber;
@protocol SKPaymentQueueClientDelegate;

@interface SKPaymentQueueClient : NSObject <NSCopying>

@property (nonatomic) char allowsBootstrapCellularData;
@property (copy, nonatomic) NSString *productsRequestBundleIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (weak, nonatomic) id<SKPaymentQueueClientDelegate> delegate;
@property (nonatomic) long long environmentType;
@property (nonatomic) char hidesConfirmationDialogs;
@property (nonatomic) char ignoresInAppPurchaseRestriction;
@property (copy, nonatomic) NSString *receiptDirectoryPath;
@property (nonatomic) char requiresAuthenticationForPayment;
@property (copy, nonatomic) NSNumber *storeExternalVersion;
@property (copy, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSString *vendorIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)plist;

@end
