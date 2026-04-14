@class NSString;

@interface BMOasisAnalyticsTrackingStateType : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int mode;
@property (readonly, nonatomic) float health;
@property (nonatomic) BOOL hasHealth;
@property (readonly, nonatomic) unsigned int numberInlierPoints;
@property (nonatomic) BOOL hasNumberInlierPoints;
@property (readonly, nonatomic) unsigned int numberOfRegularKeyframes;
@property (nonatomic) BOOL hasNumberOfRegularKeyframes;
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
- (id)initWithMode:(int)a0 health:(id)a1 numberInlierPoints:(id)a2 numberOfRegularKeyframes:(id)a3;

@end
