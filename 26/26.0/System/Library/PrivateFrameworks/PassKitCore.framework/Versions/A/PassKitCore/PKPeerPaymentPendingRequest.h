@class NSString, NSArray, NSDate, PKCurrencyAmount;

@interface PKPeerPaymentPendingRequest : NSObject <NSSecureCoding, NSCopying, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *requestToken;
@property (retain, nonatomic) NSString *requesterAddress;
@property (retain, nonatomic) NSString *requesteeAddress;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (retain, nonatomic) NSString *memo;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSDate *requestDate;
@property (retain, nonatomic) NSDate *expiryDate;
@property (retain, nonatomic) NSDate *lastDismissedDate;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSString *status;
@property (nonatomic) unsigned long long context;
@property (retain, nonatomic) NSArray *receivedTransactions;
@property (nonatomic) unsigned long long validRecipientCount;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) BOOL sentOnThisDevice;
@property (retain, nonatomic) NSString *messageGUID;
@property (retain, nonatomic) NSString *groupID;

+ (id)recordNamePrefix;
+ (id)recordNameForRequestToken:(id)a0;
+ (id)requestTokenFromRecordName:(id)a0;

- (BOOL)isPaid;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)itemType;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)primaryIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)initWithCloudStoreCoder:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;

@end
