@class NSString;

@interface BMSystemSettingsPillOutcome : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL childAccount;
@property (nonatomic) BOOL hasChildAccount;
@property (readonly, nonatomic) BOOL firstUpdate;
@property (nonatomic) BOOL hasFirstUpdate;
@property (readonly, nonatomic) BOOL fromPill;
@property (nonatomic) BOOL hasFromPill;
@property (readonly, nonatomic) NSString *gesture;
@property (readonly, nonatomic) BOOL gestureOn;
@property (nonatomic) BOOL hasGestureOn;
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
- (id)initWithChildAccount:(id)a0 firstUpdate:(id)a1 fromPill:(id)a2 gesture:(id)a3 gestureOn:(id)a4;

@end
