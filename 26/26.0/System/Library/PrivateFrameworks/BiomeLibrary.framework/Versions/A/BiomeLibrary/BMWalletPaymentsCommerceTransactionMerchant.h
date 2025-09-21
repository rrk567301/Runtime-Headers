@class NSString, NSURL;

@interface BMWalletPaymentsCommerceTransactionMerchant : BMEventBase <BMStoreData> {
    NSString *_raw_webURL;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *merchantUniqueIndentifier;
@property (readonly, nonatomic) NSURL *originURL;
@property (readonly, nonatomic) NSString *merchantUniqueIdentifier;
@property (readonly, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) NSURL *webURL;
@property (readonly, nonatomic) NSString *domainName;
@property (readonly, nonatomic) NSString *webMerchantName;
@property (readonly, nonatomic) NSString *adamIdentifier;
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
- (id)initWithMerchantUniqueIdentifier:(id)a0 merchantName:(id)a1 webURL:(id)a2 domainName:(id)a3 webMerchantName:(id)a4 adamIdentifier:(id)a5;

@end
