@class NSString, BMWalletPaymentsCommerceClassicOrderAddress;

@interface BMWalletPaymentsCommerceClassicOrderShippingRecipient : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) BMWalletPaymentsCommerceClassicOrderAddress *address;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithGivenName:(id)a0 familyName:(id)a1 phoneNumber:(id)a2 emailAddress:(id)a3 address:(id)a4;

@end
