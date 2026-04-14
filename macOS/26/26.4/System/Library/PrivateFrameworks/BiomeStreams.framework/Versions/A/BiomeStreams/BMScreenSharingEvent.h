@class NSString;

@interface BMScreenSharingEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL isStart;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (id)serialize;
- (BOOL)isEqual:(id)a0;
- (id)initWithProto:(id)a0;
- (id)init;
- (id)initWithIsStart:(BOOL)a0;
- (id)initWithIsStart:(BOOL)a0 type:(unsigned long long)a1;

@end
