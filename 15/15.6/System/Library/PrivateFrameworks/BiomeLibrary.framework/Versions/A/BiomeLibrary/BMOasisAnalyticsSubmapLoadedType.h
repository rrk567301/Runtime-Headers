@class NSString;

@interface BMOasisAnalyticsSubmapLoadedType : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long submapId;
@property (nonatomic) char hasSubmapId;
@property (readonly, nonatomic) char isLocated;
@property (nonatomic) char hasIsLocated;
@property (readonly, nonatomic) unsigned int numberOfSubmaps;
@property (nonatomic) char hasNumberOfSubmaps;
@property (readonly, nonatomic) unsigned long long bytesReadFromDisk;
@property (nonatomic) char hasBytesReadFromDisk;
@property (readonly, nonatomic) float timeToLoadChunkInSecond;
@property (nonatomic) char hasTimeToLoadChunkInSecond;
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
- (id)initWithSubmapId:(id)a0 isLocated:(id)a1 numberOfSubmaps:(id)a2 bytesReadFromDisk:(id)a3 timeToLoadChunkInSecond:(id)a4;

@end
