@class NSString;

@interface BMOSAnalyticsHighEngagementDevices : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *topCategory1;
@property (readonly, nonatomic) NSString *topCategory2;
@property (readonly, nonatomic) NSString *topCategory3;
@property (readonly, nonatomic) NSString *highEngagementCategory1;
@property (readonly, nonatomic) NSString *highEngagementCategory2;
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
- (id)initWithTopCategory1:(id)a0 topCategory2:(id)a1 topCategory3:(id)a2 highEngagementCategory1:(id)a3 highEngagementCategory2:(id)a4;

@end
