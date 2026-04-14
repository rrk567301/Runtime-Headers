@class NSString;

@interface BMOasisAnalyticsSubmapLoadedType : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long submapId;
@property (nonatomic) BOOL hasSubmapId;
@property (readonly, nonatomic) BOOL isLocationAttached;
@property (nonatomic) BOOL hasIsLocationAttached;
@property (readonly, nonatomic) unsigned long long bytesReadFromDisk;
@property (nonatomic) BOOL hasBytesReadFromDisk;
@property (readonly, nonatomic) float timeToLoadSubmapInSecond;
@property (nonatomic) BOOL hasTimeToLoadSubmapInSecond;
@property (readonly, nonatomic) float secondsElapsedSinceLastActive;
@property (nonatomic) BOOL hasSecondsElapsedSinceLastActive;
@property (readonly, nonatomic) unsigned int numberOfSubmapsWithinLoadingChunk;
@property (nonatomic) BOOL hasNumberOfSubmapsWithinLoadingChunk;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithSubmapId:(id)a0 isLocationAttached:(id)a1 bytesReadFromDisk:(id)a2 timeToLoadSubmapInSecond:(id)a3 secondsElapsedSinceLastActive:(id)a4 numberOfSubmapsWithinLoadingChunk:(id)a5;

@end
