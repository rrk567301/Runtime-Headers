@class NSString;

@interface BMCarouselCompanion : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) BOOL connected;
@property (nonatomic) BOOL hasConnected;
@property (readonly, nonatomic) BOOL nearby;
@property (nonatomic) BOOL hasNearby;
@property (readonly, nonatomic) BOOL cloud;
@property (nonatomic) BOOL hasCloud;
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
- (id)initWithStarting:(id)a0 connected:(id)a1 nearby:(id)a2 cloud:(id)a3;

@end
