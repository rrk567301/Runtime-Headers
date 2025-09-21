@class NSString;

@interface BMUserFocusComputedModeEvent : BMEventBase <BMEventBinaryStepping, BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (copy, nonatomic) NSString *mode;
@property (copy, nonatomic) NSString *semanticModeIdentifier;
@property (nonatomic) unsigned long long modeUpdateReason;
@property (nonatomic) long long modeSemanticType;
@property (nonatomic) long long modeUpdateSource;
@property (nonatomic, getter=isStarting) char starting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int dataVersion;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithMode:(id)a0 semanticModeIdentifier:(id)a1 starting:(char)a2 modeUpdateReason:(unsigned long long)a3 modeSemanticType:(long long)a4 modeUpdateSource:(long long)a5;
- (id)initWithMode:(id)a0 starting:(char)a1;
- (id)initWithMode:(id)a0 starting:(char)a1 modeUpdateReason:(unsigned long long)a2 modeSemanticType:(long long)a3;
- (id)initWithMode:(id)a0 starting:(char)a1 modeUpdateReason:(unsigned long long)a2 modeSemanticType:(long long)a3 modeUpdateSource:(long long)a4;
- (id)initWithProto:(id)a0;

@end
