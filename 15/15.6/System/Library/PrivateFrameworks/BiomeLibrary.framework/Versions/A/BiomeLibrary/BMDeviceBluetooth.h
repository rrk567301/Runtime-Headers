@class NSString;

@interface BMDeviceBluetooth : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int productID;
@property (nonatomic) char hasProductID;
@property (readonly, nonatomic) char starting;
@property (nonatomic) char hasStarting;
@property (readonly, nonatomic) int deviceType;
@property (readonly, nonatomic) int batteryLevelHeadphoneCase;
@property (nonatomic) char hasBatteryLevelHeadphoneCase;
@property (readonly, nonatomic) int batteryLevelHeadphoneRight;
@property (nonatomic) char hasBatteryLevelHeadphoneRight;
@property (readonly, nonatomic) int batteryLevelHeadphoneLeft;
@property (nonatomic) char hasBatteryLevelHeadphoneLeft;
@property (readonly, nonatomic) char appleAudioDevice;
@property (nonatomic) char hasAppleAudioDevice;
@property (readonly, nonatomic) char userWearing;
@property (nonatomic) char hasUserWearing;
@property (readonly, nonatomic) unsigned int vendorID;
@property (nonatomic) char hasVendorID;
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
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithAddress:(id)a0 name:(id)a1 productID:(id)a2 starting:(id)a3 deviceType:(int)a4 batteryLevelHeadphoneCase:(id)a5 batteryLevelHeadphoneRight:(id)a6 batteryLevelHeadphoneLeft:(id)a7 appleAudioDevice:(id)a8 userWearing:(id)a9 vendorID:(id)a10;
- (id)initWithAddress:(id)a0 name:(id)a1 productID:(id)a2 starting:(id)a3 deviceType:(int)a4 batteryLevelHeadphoneCase:(id)a5 batteryLevelHeadphoneRight:(id)a6 batteryLevelHeadphoneLeft:(id)a7 appleAudioDevice:(id)a8 userWearing:(id)a9;

@end
