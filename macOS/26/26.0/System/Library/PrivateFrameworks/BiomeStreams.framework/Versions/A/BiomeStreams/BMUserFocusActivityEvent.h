@class NSString;

@interface BMUserFocusActivityEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *mode;
@property (readonly, nonatomic) BOOL isStart;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)proto;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMode:(id)a0 clientID:(id)a1 isStart:(BOOL)a2;

@end
