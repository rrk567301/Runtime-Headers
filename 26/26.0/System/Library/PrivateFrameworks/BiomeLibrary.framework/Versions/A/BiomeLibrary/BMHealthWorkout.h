@class NSString;

@interface BMHealthWorkout : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL isFirstPartyDonation;
@property (nonatomic) BOOL hasIsFirstPartyDonation;
@property (readonly, nonatomic) BOOL isIndoor;
@property (nonatomic) BOOL hasIsIndoor;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) int eventType;
@property (readonly, nonatomic) NSString *activityUUID;
@property (readonly, nonatomic) BOOL isUpdate;
@property (nonatomic) BOOL hasIsUpdate;
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
- (void).cxx_destruct;
- (id)initWithIsFirstPartyDonation:(id)a0 isIndoor:(id)a1 activityType:(id)a2 eventType:(int)a3 activityUUID:(id)a4 isUpdate:(id)a5;

@end
