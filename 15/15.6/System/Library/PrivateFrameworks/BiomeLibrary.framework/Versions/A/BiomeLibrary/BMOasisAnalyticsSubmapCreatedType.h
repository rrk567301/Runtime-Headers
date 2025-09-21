@class NSString;

@interface BMOasisAnalyticsSubmapCreatedType : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long submapId;
@property (nonatomic) char hasSubmapId;
@property (readonly, nonatomic) char isLocationAttached;
@property (nonatomic) char hasIsLocationAttached;
@property (readonly, nonatomic) unsigned long long bytesWrittenToDisk;
@property (nonatomic) char hasBytesWrittenToDisk;
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
- (id)initWithSubmapId:(id)a0 isLocationAttached:(id)a1 bytesWrittenToDisk:(id)a2;

@end
