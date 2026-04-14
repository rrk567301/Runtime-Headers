@class NSUUID, NSString;

@interface BMAlarmEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) BOOL isSleepAlarm;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) NSUUID *alarmID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)serialize;
- (id)jsonDict;
- (id)json;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProto:(id)a0;
- (id)initWithEventType:(unsigned long long)a0 alarmID:(id)a1 isSleepAlarm:(BOOL)a2;

@end
