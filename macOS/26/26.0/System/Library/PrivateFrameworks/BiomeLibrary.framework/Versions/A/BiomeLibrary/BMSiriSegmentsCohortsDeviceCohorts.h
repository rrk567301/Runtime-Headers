@class NSString;

@interface BMSiriSegmentsCohortsDeviceCohorts : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long startTimestampInSecondsSince1970;
@property (nonatomic) BOOL hasStartTimestampInSecondsSince1970;
@property (readonly, nonatomic) unsigned int windowInSeconds;
@property (nonatomic) BOOL hasWindowInSeconds;
@property (readonly, nonatomic) int cohortType;
@property (nonatomic) BOOL hasCohortType;
@property (readonly, nonatomic) int cohortDataAvailabilityState;
@property (nonatomic) BOOL hasCohortDataAvailabilityState;
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
- (id)initWithStartTimestampInSecondsSince1970:(id)a0 windowInSeconds:(id)a1 cohortType:(id)a2 cohortDataAvailabilityState:(id)a3;

@end
