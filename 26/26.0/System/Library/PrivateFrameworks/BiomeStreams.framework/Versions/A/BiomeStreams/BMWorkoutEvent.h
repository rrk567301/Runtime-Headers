@class NSString;

@interface BMWorkoutEvent : BMEventBase <BMEventBinaryStepping, BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (nonatomic, getter=isStarting) BOOL starting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int dataVersion;

- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithStarting:(BOOL)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)proto;
- (BOOL)isEqual:(id)a0;

@end
