@class NSString, NSDate;

@interface FCPurchaseLookUpEntry : NSObject

@property (nonatomic) unsigned long long purchaseType;
@property (nonatomic) unsigned long long purchaseValidationState;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *tagID;
@property (copy, nonatomic) NSString *purchaseID;
@property (copy, nonatomic) NSDate *lastVerificationTime;
@property (copy, nonatomic) NSDate *lastVerificationFailureTime;
@property (nonatomic) char isNewsAppPurchase;
@property (copy, nonatomic) NSDate *dateOfExpiration;
@property (nonatomic) char hasShownRenewalNotice;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)a0 dictionaryRepresentation:(id)a1;
- (id)initWithEntryID:(id)a0 tagID:(id)a1 purchaseID:(id)a2 lastVerificationTime:(id)a3 lastVerificationFailureTime:(id)a4 purchaseType:(unsigned long long)a5 purchaseValidationState:(unsigned long long)a6 isNewsAppPurchase:(char)a7 dateOfExpiration:(id)a8 hasShownRenewalNotice:(char)a9;

@end
