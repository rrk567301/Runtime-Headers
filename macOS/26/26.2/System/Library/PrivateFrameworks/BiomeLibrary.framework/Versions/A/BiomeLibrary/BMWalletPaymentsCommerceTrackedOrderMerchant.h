@class NSString, NSDate;

@interface BMWalletPaymentsCommerceTrackedOrderMerchant : BMEventBase <BMStoreData> {
    BOOL _hasRaw_displayNameUpdateDate;
    double _raw_displayNameUpdateDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *domainName;
@property (readonly, nonatomic) NSDate *displayNameUpdateDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;

- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)serialize;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithDisplayName:(id)a0 domainName:(id)a1 displayNameUpdateDate:(id)a2;

@end
