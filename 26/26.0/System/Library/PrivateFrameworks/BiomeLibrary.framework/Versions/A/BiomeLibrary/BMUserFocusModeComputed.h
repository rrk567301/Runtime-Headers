@class NSString;

@interface BMUserFocusModeComputed : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *mode;
@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) int updateReason;
@property (readonly, nonatomic) int semanticType;
@property (readonly, nonatomic) int updateSource;
@property (readonly, nonatomic) NSString *semanticModeIdentifier;
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
- (id)initWithMode:(id)a0 starting:(id)a1 updateReason:(int)a2 semanticType:(int)a3 updateSource:(int)a4 semanticModeIdentifier:(id)a5;

@end
