@class NSString;

@interface BMGameControllerEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (nonatomic) BOOL isControllerConnected;
@property (nonatomic) unsigned long long numberOfControllersConnected;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serialize;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)initWithIsControllerConnected:(BOOL)a0 numberOfControllersConnected:(unsigned long long)a1;

@end
