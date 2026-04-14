@class NSString;

@interface BMAppleIntelligenceAvailabilityOptInInfo : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL optedInBuddy;
@property (nonatomic) BOOL hasOptedInBuddy;
@property (readonly, nonatomic) BOOL optedOutBuddy;
@property (nonatomic) BOOL hasOptedOutBuddy;
@property (readonly, nonatomic) BOOL hasEngagedWithLWBuddy;
@property (nonatomic) BOOL hasHasEngagedWithLWBuddy;
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
- (id)initWithOptedInBuddy:(id)a0 optedOutBuddy:(id)a1 hasEngagedWithLWBuddy:(id)a2;

@end
