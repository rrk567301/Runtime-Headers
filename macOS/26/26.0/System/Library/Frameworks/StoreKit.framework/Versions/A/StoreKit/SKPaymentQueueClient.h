@class NSString, NSNumber;

@interface SKPaymentQueueClient : NSObject <NSCopying> {
    void /* function */ bundleIdentifier;
    void /* function */ bundleVersion;
    void /* function */ productsRequestBundleIdentifier;
    void /* function */ receiptDirectoryPath;
    void /* function */ vendorIdentifier;
}

@property (nonatomic) BOOL allowsBootstrapCellularData;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundleVersion;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic) long long environmentType;
@property (nonatomic) BOOL hidesConfirmationDialogs;
@property (nonatomic) BOOL ignoresInAppPurchaseRestriction;
@property (nonatomic, copy) NSString *productsRequestBundleIdentifier;
@property (nonatomic, copy) NSString *receiptDirectoryPath;
@property (nonatomic) BOOL requiresAuthenticationForPayment;
@property (nonatomic, retain) NSNumber *storeExternalVersion;
@property (nonatomic, retain) NSNumber *storeItemIdentifier;
@property (nonatomic, copy) NSString *vendorIdentifier;

- (id)copyWithZone:(void *)a0;
- (id)plist;
- (id)init;
- (void).cxx_destruct;

@end
