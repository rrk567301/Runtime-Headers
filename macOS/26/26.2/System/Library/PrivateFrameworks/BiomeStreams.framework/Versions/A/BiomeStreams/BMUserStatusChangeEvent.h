@class NSString, NSArray;

@interface BMUserStatusChangeEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (copy, nonatomic) NSString *idsHandle;
@property (copy, nonatomic) NSString *statusChangeType;
@property (copy, nonatomic) NSArray *idsHandles;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serialize;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (void).cxx_destruct;
- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)initWithIDSHandle:(id)a0 statusChangeType:(id)a1;
- (id)initWithIDSHandles:(id)a0 statusChangeType:(id)a1;

@end
