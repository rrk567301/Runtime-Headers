@class NSString;

@interface BMSoundDetectionEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)init;
- (id)serialize;
- (id)proto;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAbsoluteTimestamp:(double)a0 type:(id)a1 customName:(id)a2;

@end
