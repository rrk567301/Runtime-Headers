@class NSString, BMWalletPaymentsCommerceClassicOrderLocalizedString;

@interface BMWalletPaymentsCommerceClassicOrderMerchant : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMWalletPaymentsCommerceClassicOrderLocalizedString *displayName;
@property (readonly, nonatomic) NSString *domainName;
@property (readonly, nonatomic) NSString *localizedDisplayName;
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
- (id)initWithDisplayName:(id)a0 domainName:(id)a1 localizedDisplayName:(id)a2;

@end
