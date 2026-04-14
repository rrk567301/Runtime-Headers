@class NSString;

@interface BMAppleIntelligenceAvailabilityUseCaseInfo : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL isDeviceEligible;
@property (nonatomic) BOOL hasIsDeviceEligible;
@property (readonly, nonatomic) BOOL shouldBlockAppleIntelligenceAssets;
@property (nonatomic) BOOL hasShouldBlockAppleIntelligenceAssets;
@property (readonly, nonatomic) int waitlistStatus;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;

- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)serialize;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithIsDeviceEligible:(id)a0 shouldBlockAppleIntelligenceAssets:(id)a1 waitlistStatus:(int)a2;

@end
