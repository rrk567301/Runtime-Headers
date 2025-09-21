@class NSString;

@interface BMLocationHashedCoordinates : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double distanceFromHomeOfCurrentLocationInMeters;
@property (nonatomic) char hasDistanceFromHomeOfCurrentLocationInMeters;
@property (readonly, nonatomic) double distanceFromWorkOfCurrentLocationInMeters;
@property (nonatomic) char hasDistanceFromWorkOfCurrentLocationInMeters;
@property (readonly, nonatomic) double distanceFromSchoolOfCurrentLocationInMeters;
@property (nonatomic) char hasDistanceFromSchoolOfCurrentLocationInMeters;
@property (readonly, nonatomic) double distanceFromGymOfCurrentLocationInMeters;
@property (nonatomic) char hasDistanceFromGymOfCurrentLocationInMeters;
@property (readonly, nonatomic) unsigned long long locationHashAt300Meters;
@property (nonatomic) char hasLocationHashAt300Meters;
@property (readonly, nonatomic) unsigned long long locationHashAt2500Meters;
@property (nonatomic) char hasLocationHashAt2500Meters;
@property (readonly, nonatomic) unsigned long long locationHashAt156Kilometers;
@property (nonatomic) char hasLocationHashAt156Kilometers;
@property (readonly, nonatomic) int floor;
@property (nonatomic) char hasFloor;
@property (readonly, nonatomic) int speedBucket;
@property (readonly, nonatomic) int altitudeBucket;
@property (readonly, nonatomic) int distanceBucketFromHome;
@property (readonly, nonatomic) int distanceBucketFromWork;
@property (readonly, nonatomic) int distanceBucketFromGym;
@property (readonly, nonatomic) int distanceBucketFromSchool;
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
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithLocationHashAt300Meters:(id)a0 locationHashAt2500Meters:(id)a1 locationHashAt156Kilometers:(id)a2 distanceFromHomeOfCurrentLocationInMeters:(id)a3 distanceFromWorkOfCurrentLocationInMeters:(id)a4 distanceFromSchoolOfCurrentLocationInMeters:(id)a5 distanceFromGymOfCurrentLocationInMeters:(id)a6 floor:(id)a7 speedBucket:(int)a8 altitudeBucket:(int)a9;
- (id)initWithLocationHashAt300Meters:(id)a0 locationHashAt2500Meters:(id)a1 locationHashAt156Kilometers:(id)a2 distanceFromHomeOfCurrentLocationInMeters:(id)a3 distanceFromWorkOfCurrentLocationInMeters:(id)a4 distanceFromSchoolOfCurrentLocationInMeters:(id)a5 distanceFromGymOfCurrentLocationInMeters:(id)a6 floor:(id)a7 speedBucket:(int)a8 altitudeBucket:(int)a9 distanceBucketFromHome:(int)a10 distanceBucketFromWork:(int)a11 distanceBucketFromGym:(int)a12 distanceBucketFromSchool:(int)a13;
- (id)initWithLocationHashAt300Meters:(id)a0 locationHashAt2500Meters:(id)a1 locationHashAt156Kilometers:(id)a2 floor:(id)a3 speedBucket:(int)a4 altitudeBucket:(int)a5 distanceBucketFromHome:(int)a6 distanceBucketFromWork:(int)a7 distanceBucketFromGym:(int)a8 distanceBucketFromSchool:(int)a9;

@end
