@class BMSiriOnDeviceDigestSegmentsCohortsTimeInterval, NSString;

@interface BMSiriOnDeviceDigestSegmentsCohortsDeviceCohorts : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMSiriOnDeviceDigestSegmentsCohortsTimeInterval *timeInterval;
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
- (void).cxx_destruct;
- (id)initWithTimeInterval:(id)a0 cohortType:(id)a1 cohortDataAvailabilityState:(id)a2;

@end
