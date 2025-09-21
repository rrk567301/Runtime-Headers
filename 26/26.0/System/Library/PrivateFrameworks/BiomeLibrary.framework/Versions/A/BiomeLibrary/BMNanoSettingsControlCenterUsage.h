@class NSString;

@interface BMNanoSettingsControlCenterUsage : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int transition;
@property (readonly, nonatomic) int statusDetailTransition;
@property (readonly, nonatomic) int buttonID;
@property (nonatomic) BOOL hasButtonID;
@property (readonly, nonatomic) int buttonPress;
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
- (id)initWithTransition:(int)a0 statusDetailTransition:(int)a1 buttonID:(id)a2 buttonPress:(int)a3;

@end
