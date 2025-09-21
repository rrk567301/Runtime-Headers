@class NSString;

@interface BMHealthWorkout : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) char isFirstPartyDonation;
@property (nonatomic) char hasIsFirstPartyDonation;
@property (readonly, nonatomic) char isIndoor;
@property (nonatomic) char hasIsIndoor;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) int eventType;
@property (readonly, nonatomic) NSString *activityUUID;
@property (readonly, nonatomic) char isUpdate;
@property (nonatomic) char hasIsUpdate;
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
- (id)initWithIsFirstPartyDonation:(id)a0 isIndoor:(id)a1 activityType:(id)a2 eventType:(int)a3 activityUUID:(id)a4 isUpdate:(id)a5;

@end
