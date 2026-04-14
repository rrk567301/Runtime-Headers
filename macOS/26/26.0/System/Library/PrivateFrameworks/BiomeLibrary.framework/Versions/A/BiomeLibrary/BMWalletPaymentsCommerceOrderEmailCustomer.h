@class NSString, BMWalletPaymentsCommerceOrderEmailAddress;

@interface BMWalletPaymentsCommerceOrderEmailCustomer : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) BMWalletPaymentsCommerceOrderEmailAddress *billingAddress;
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
- (id)initWithFullName:(id)a0 phoneNumber:(id)a1 emailAddress:(id)a2 billingAddress:(id)a3 givenName:(id)a4 familyName:(id)a5;

@end
