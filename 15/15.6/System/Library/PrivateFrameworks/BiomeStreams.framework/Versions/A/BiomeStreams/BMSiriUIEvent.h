@class NSString;

@interface BMSiriUIEvent : BMEventBase <BMStoreData, BMProtoBufWrapper, BMEventBinaryStepping>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly, copy, nonatomic) NSString *viewMode;
@property (readonly, copy, nonatomic) NSString *dismissalReason;
@property (nonatomic, getter=isStarting) char starting;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithSessionID:(id)a0 UUID:(id)a1 viewMode:(id)a2 dismissalReason:(id)a3 starting:(char)a4 absoluteTimeStamp:(double)a5;

@end
