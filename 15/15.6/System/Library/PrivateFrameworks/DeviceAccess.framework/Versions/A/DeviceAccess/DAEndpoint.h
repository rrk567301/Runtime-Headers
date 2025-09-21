@class NSDictionary, DADevice, NSString;

@interface DAEndpoint : NSObject

@property (nonatomic) unsigned long long addTicks;
@property (nonatomic) char grouped;
@property (weak, nonatomic) DADevice *parentDevice;
@property (readonly, copy, nonatomic) NSDictionary *persistentDictionaryRepresentation;
@property (nonatomic) char selected;
@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSString *airplayDeviceID;
@property (copy, nonatomic) NSString *bonjourFullName;
@property (copy, nonatomic) NSString *bonjourHostname;
@property (copy, nonatomic) NSString *bonjourName;
@property (copy, nonatomic) NSString *bonjourType;
@property (nonatomic) unsigned int bonjourInterfaceIndex;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *ipv4String;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) char missing;
@property (copy, nonatomic) NSString *protocolTypeString;
@property (copy, nonatomic) DADevice *underlyingDADevice;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)a0;
- (void)updateWithEndpoint:(id)a0;
- (id)initWithPersistentDictionaryRepresentation:(id)a0 error:(id *)a1;
- (char)matchesSelectedEndpoint:(id)a0 allowName:(char)a1;
- (void)mergeMissingInfoFromEndpoint:(id)a0;
- (char)sameDeviceAsEndpoint:(id)a0;

@end
