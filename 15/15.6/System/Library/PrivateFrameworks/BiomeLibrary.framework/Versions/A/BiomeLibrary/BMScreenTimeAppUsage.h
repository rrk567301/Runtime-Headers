@class NSString, NSDate;

@interface BMScreenTimeAppUsage : BMEventBase <BMStoreData> {
    char _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) char starting;
@property (nonatomic) char hasStarting;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *parentBundleID;
@property (readonly, nonatomic) char isUsageTrusted;
@property (nonatomic) char hasIsUsageTrusted;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithStarting:(id)a0 absoluteTimestamp:(id)a1 bundleID:(id)a2 parentBundleID:(id)a3 isUsageTrusted:(id)a4;

@end
