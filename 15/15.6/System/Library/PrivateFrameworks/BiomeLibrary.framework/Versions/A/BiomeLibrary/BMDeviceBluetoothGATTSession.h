@class NSString, NSArray;

@interface BMDeviceBluetoothGATTSession : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSArray *serviceUUID;
@property (readonly, nonatomic) NSString *sessionType;
@property (readonly, nonatomic) int sessionState;
@property (readonly, nonatomic) char supportsBackgrounding;
@property (nonatomic) char hasSupportsBackgrounding;
@property (readonly, nonatomic) char supportsStateRestoration;
@property (nonatomic) char hasSupportsStateRestoration;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)_serviceUUIDJSONArray;
- (id)initWithBundleID:(id)a0 serviceUUID:(id)a1 sessionType:(id)a2 sessionState:(int)a3 supportsBackgrounding:(id)a4 supportsStateRestoration:(id)a5;

@end
