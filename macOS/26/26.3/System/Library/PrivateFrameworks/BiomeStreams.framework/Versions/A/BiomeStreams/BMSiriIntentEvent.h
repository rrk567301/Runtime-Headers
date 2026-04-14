@class NSString, NSData;

@interface BMSiriIntentEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, copy, nonatomic) NSString *intentId;
@property (readonly, copy, nonatomic) NSString *eventType;
@property (readonly, copy, nonatomic) NSData *eventData;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)proto;
- (id)serialize;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIntentId:(id)a0 eventType:(id)a1 eventData:(id)a2;

@end
