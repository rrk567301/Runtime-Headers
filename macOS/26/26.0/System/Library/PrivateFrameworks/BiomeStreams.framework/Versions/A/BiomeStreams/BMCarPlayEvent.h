@class NSString;

@interface BMCarPlayEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL isStart;
@property (readonly, nonatomic) unsigned long long reason;
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
- (id)json;
- (id)initWithReason:(unsigned long long)a0 isStart:(BOOL)a1;
- (id)init;
- (id)jsonDict;
- (id)serialize;
- (id)proto;
- (BOOL)isEqual:(id)a0;

@end
