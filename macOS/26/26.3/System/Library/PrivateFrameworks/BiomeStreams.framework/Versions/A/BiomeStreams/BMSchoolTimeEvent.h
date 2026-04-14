@class NSString;

@interface BMSchoolTimeEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (nonatomic, getter=isStarting) BOOL starting;
@property (nonatomic) unsigned long long reason;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)proto;
- (id)serialize;
- (id)initWithStarting:(BOOL)a0;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (BOOL)isEqual:(id)a0;
- (id)initWithStarting:(BOOL)a0 reason:(unsigned long long)a1;

@end
