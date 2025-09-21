@class NSString, NSDictionary, NSData, SSDownloadMetadata, NSNumber, ISOperation;

@interface SSPurchase : NSObject <NSSecureCoding, NSCopying> {
    NSString *_uniqueIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) long long purchaseType;
@property char isDSIDLessPurchase;
@property (retain) NSDictionary *dsidLessOptions;
@property (copy, nonatomic) NSString *buyParameters;
@property (copy, nonatomic) SSDownloadMetadata *downloadMetadata;
@property (retain, nonatomic) NSNumber *accountIdentifier;
@property (retain, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSString *sortableAccountIdentifier;
@property char isRecoveryPurchase;
@property char isUpdate;
@property char isRedownload;
@property char isVPP;
@property (retain, nonatomic) NSString *managedAppUUIDString;
@property (retain, nonatomic) NSData *receiptData;
@property (retain, nonatomic) NSString *parentalControls;
@property char checkPreflightAterPurchase;
@property char shouldBeInstalledAfterLogout;
@property (readonly) char needsAuthentication;
@property unsigned long long itemIdentifier;
@property (copy) id /* block */ authFallbackHandler;
@property char isCancelled;
@property (weak) ISOperation *purchaseOperation;
@property (copy) NSDictionary *responseDialog;

+ (id)purchaseWithBuyParameters:(id)a0;
+ (id)purchasesGroupedByAccountIdentifierWithPurchases:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)productID;
- (char)needsAuthentication;
- (id)_sortableAccountIdentifier;
- (char)isRecoveryPurchase;
- (char)purchaseDSIDMatchesPrimaryAccount;
- (void)setIsRecoveryPurchase:(char)a0;

@end
