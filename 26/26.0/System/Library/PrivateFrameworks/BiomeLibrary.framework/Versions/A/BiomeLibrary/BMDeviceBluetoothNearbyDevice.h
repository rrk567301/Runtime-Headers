@class NSString;

@interface BMDeviceBluetoothNearbyDevice : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL initiator;
@property (nonatomic) BOOL hasInitiator;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) unsigned long long useCase;
@property (nonatomic) BOOL hasUseCase;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInitiator:(id)a0 localIdentifier:(id)a1 starting:(id)a2 useCase:(id)a3;

@end
