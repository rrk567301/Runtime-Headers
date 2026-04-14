@class NSString;

@interface BMSiriSegmentsCohortsDeviceSegments : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int segmentType;
@property (nonatomic) BOOL hasSegmentType;
@property (readonly, nonatomic) int segmentDataAvailabilityState;
@property (nonatomic) BOOL hasSegmentDataAvailabilityState;
@property (readonly, nonatomic) int daysWithTwoValidAssistantTurnsPerWeek;
@property (nonatomic) BOOL hasDaysWithTwoValidAssistantTurnsPerWeek;
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
- (void)writeTo:(id)a0;
- (id)initWithSegmentType:(id)a0 segmentDataAvailabilityState:(id)a1 daysWithTwoValidAssistantTurnsPerWeek:(id)a2;

@end
