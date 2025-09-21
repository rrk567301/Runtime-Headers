@class PKCurrencyAmount, NSString, NSArray, NSData, PKPaymentApplication, NSNumber, NSDate;

@interface PKRemotePaymentInstrument : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *passIdentifier;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSData *manifestHash;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *primaryAccountNumberSuffix;
@property (copy, nonatomic) NSString *primaryAccountIdentifier;
@property (copy, nonatomic) NSString *issuerCountryCode;
@property (nonatomic) unsigned long long associatedAccountFeatureIdentifier;
@property (copy, nonatomic, getter=isCobranded) NSNumber *cobranded;
@property (copy, nonatomic) NSString *cobrandName;
@property (retain, nonatomic) NSArray *paymentApplications;
@property (retain, nonatomic) PKPaymentApplication *primaryPaymentApplication;
@property (retain, nonatomic) NSDate *ingestedDate;
@property (nonatomic) char supportsAutomaticSelection;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentAccountBalance;
@property (nonatomic) char hasAssociatedPeerPaymentAccount;
@property (nonatomic) unsigned long long peerPaymentAccountState;
@property (retain, nonatomic) NSArray *associatedWebDomains;

+ (id)remotePaymentInstrumentWithProtobuf:(id)a0;
+ (id)sortDescriptorForDefaultPaymentInstrument:(id)a0 paymentSupportedQuery:(id)a1;
+ (id)thumbnailCachePathForManifestHash:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)protobuf;
- (id)initWithPaymentPass:(id)a0;
- (char)isEqualToRemotePaymentInstrument:(id)a0;
- (id)sortedPaymentApplications:(id)a0 ascending:(char)a1;

@end
