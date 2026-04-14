@class NSString;

@interface BMDeviceMetadataEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *build;
@property (readonly, copy, nonatomic) NSString *supplementalBuild;
@property (readonly, nonatomic) long long platform;
@property (readonly, nonatomic) BOOL rapidSecurityResponsePreReboot;
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
- (id)initWithName:(id)a0 build:(id)a1 platform:(long long)a2;
- (id)initWithName:(id)a0 build:(id)a1 supplementalBuild:(id)a2 platform:(long long)a3;
- (id)initWithName:(id)a0 build:(id)a1 supplementalBuild:(id)a2 platform:(long long)a3 rapidSecurityResponsePreReboot:(BOOL)a4;

@end
