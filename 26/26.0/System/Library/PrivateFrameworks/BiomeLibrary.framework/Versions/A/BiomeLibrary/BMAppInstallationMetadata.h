@class NSString, NSData, NSDate;

@interface BMAppInstallationMetadata : BMEventBase <BMStoreData> {
    BOOL _hasRaw_originalInstallationDate;
    double _raw_originalInstallationDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *originalInstallationDate;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *shortVersion;
@property (readonly, nonatomic) NSData *uniqueInstallID;
@property (readonly, nonatomic) NSData *installSessionID;
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
- (id)initWithOriginalInstallationDate:(id)a0 version:(id)a1 shortVersion:(id)a2 uniqueInstallID:(id)a3 installSessionID:(id)a4;

@end
