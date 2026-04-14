@class NSString;

@interface BMPhotoFeatures : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL isFavorited;
@property (nonatomic) BOOL hasIsFavorited;
@property (readonly, nonatomic) BOOL isScreenShot;
@property (nonatomic) BOOL hasIsScreenShot;
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
- (id)initWithIsFavorited:(id)a0 isScreenShot:(id)a1;

@end
