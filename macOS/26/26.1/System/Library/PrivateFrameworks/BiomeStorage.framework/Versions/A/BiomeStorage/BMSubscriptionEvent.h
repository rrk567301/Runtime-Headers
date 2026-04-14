@class NSString, NSUUID;

@interface BMSubscriptionEvent : NSObject <BMProtoBufWrapper, NSSecureCoding, BMStoreData> {
    unsigned int _dataVersion;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *client;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *useCase;
@property (readonly, nonatomic) BOOL starting;
@property (readonly, nonatomic) NSUUID *bootUUID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)new;

- (id)jsonDictionary;
- (id)encodeAsProto;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (id)init;
- (id)initWithClient:(id)a0 identifier:(id)a1 useCase:(id)a2 starting:(BOOL)a3;
- (id)_initWithClient:(id)a0 identifier:(id)a1 useCase:(id)a2 starting:(BOOL)a3 bootUUID:(id)a4;

@end
