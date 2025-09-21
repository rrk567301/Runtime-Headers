@class NSString, BMDeviceExpertTroubleshootingInteraction;

@interface BMDeviceExpertTroubleshooting : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) NSString *step;
@property (readonly, nonatomic) int version;
@property (nonatomic) BOOL hasVersion;
@property (readonly, nonatomic) NSString *session;
@property (readonly, nonatomic) NSString *flow;
@property (readonly, nonatomic) BMDeviceExpertTroubleshootingInteraction *interaction;
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
- (id)initWithType:(id)a0 step:(id)a1 status:(id)a2 version:(id)a3 session:(id)a4 flow:(id)a5 interaction:(id)a6;

@end
