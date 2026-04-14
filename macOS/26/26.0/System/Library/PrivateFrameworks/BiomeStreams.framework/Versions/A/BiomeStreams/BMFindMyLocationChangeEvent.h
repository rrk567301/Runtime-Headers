@class NSString, NSNumber;

@interface BMFindMyLocationChangeEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (copy, nonatomic) NSString *idsHandle;
@property (nonatomic) unsigned long long locationChangeType;
@property long long motionActivityState;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)proto;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIDSHandle:(id)a0 locationChangeType:(unsigned long long)a1;
- (id)initWithIDSHandle:(id)a0 locationChangeType:(unsigned long long)a1 motionActivityState:(long long)a2 latitude:(id)a3 longitude:(id)a4 name:(id)a5;

@end
