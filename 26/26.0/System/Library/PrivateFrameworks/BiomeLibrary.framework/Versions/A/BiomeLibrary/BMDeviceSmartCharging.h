@class NSString;

@interface BMDeviceSmartCharging : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int batteryLevel;
@property (nonatomic) BOOL hasBatteryLevel;
@property (readonly, nonatomic) int targetSoC;
@property (nonatomic) BOOL hasTargetSoC;
@property (readonly, nonatomic) double predictedEndOfCharge;
@property (nonatomic) BOOL hasPredictedEndOfCharge;
@property (readonly, nonatomic) int mode;
@property (readonly, nonatomic) int obcEvent;
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
- (id)initWithBatteryLevel:(id)a0 targetSoC:(id)a1 predictedEndOfCharge:(id)a2 mode:(int)a3 obcEvent:(int)a4;

@end
