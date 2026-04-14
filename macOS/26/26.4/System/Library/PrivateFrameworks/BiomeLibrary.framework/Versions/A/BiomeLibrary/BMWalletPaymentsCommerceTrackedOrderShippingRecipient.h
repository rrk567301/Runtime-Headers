@class NSString, BMWalletPaymentsCommerceTrackedOrderAddress;

@interface BMWalletPaymentsCommerceTrackedOrderShippingRecipient : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) BMWalletPaymentsCommerceTrackedOrderAddress *address;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)initWithFullName:(id)a0 phoneNumber:(id)a1 emailAddress:(id)a2 address:(id)a3;
- (id)initWithFullName:(id)a0 phoneNumber:(id)a1 emailAddress:(id)a2 address:(id)a3 givenName:(id)a4 familyName:(id)a5;
- (id)initWithGivenName:(id)a0 familyName:(id)a1 phoneNumber:(id)a2 emailAddress:(id)a3 address:(id)a4;

@end
