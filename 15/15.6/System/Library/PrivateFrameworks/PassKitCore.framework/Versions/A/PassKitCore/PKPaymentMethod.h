@class PKPaymentPass, NSString, CNContact, PKRemotePaymentInstrument, PKBankAccountInformation, PKSecureElementPass;

@interface PKPaymentMethod : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *network;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) PKPaymentPass *paymentPass;
@property (copy, nonatomic) PKSecureElementPass *secureElementPass;
@property (copy, nonatomic) CNContact *billingAddress;
@property (retain, nonatomic) PKRemotePaymentInstrument *remoteInstrument;
@property (copy, nonatomic) NSString *peerPaymentQuoteIdentifier;
@property (nonatomic) char usePeerPaymentBalance;
@property (retain, nonatomic) PKBankAccountInformation *bankAccount;
@property (copy, nonatomic) NSString *bindToken;

+ (long long)version;
+ (id)paymentMethodWithProtobuf:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)protobuf;
- (id)initWithBankAccount:(id)a0;
- (id)initWithBindToken:(id)a0;
- (id)initWithPayLaterAccount:(id)a0 primaryAccountNumberSuffix:(id)a1 obfuscateNetworks:(char)a2;
- (id)initWithPaymentPass:(id)a0 obfuscateNetworks:(char)a1;
- (id)initWithPaymentPass:(id)a0 paymentApplication:(id)a1 obfuscateNetworks:(char)a2;
- (id)initWithPeerPaymentQuote:(id)a0;
- (id)initWithRemotePaymentInstrument:(id)a0;
- (id)initWithRemotePaymentInstrument:(id)a0 paymentApplication:(id)a1;

@end
