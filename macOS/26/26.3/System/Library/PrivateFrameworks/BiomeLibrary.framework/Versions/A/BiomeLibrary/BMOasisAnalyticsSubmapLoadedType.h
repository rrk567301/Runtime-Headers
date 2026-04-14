@class NSString;

@interface BMOasisAnalyticsSubmapLoadedType : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long submapId;
@property (nonatomic) BOOL hasSubmapId;
@property (readonly, nonatomic) BOOL isLocated;
@property (nonatomic) BOOL hasIsLocated;
@property (readonly, nonatomic) unsigned int numberOfSubmaps;
@property (nonatomic) BOOL hasNumberOfSubmaps;
@property (readonly, nonatomic) unsigned long long bytesReadFromDisk;
@property (nonatomic) BOOL hasBytesReadFromDisk;
@property (readonly, nonatomic) float timeToLoadChunkInSecond;
@property (nonatomic) BOOL hasTimeToLoadChunkInSecond;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)serialize;
- (void)writeTo:(id)a0;
- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithSubmapId:(id)a0 isLocated:(id)a1 numberOfSubmaps:(id)a2 bytesReadFromDisk:(id)a3 timeToLoadChunkInSecond:(id)a4;

@end
