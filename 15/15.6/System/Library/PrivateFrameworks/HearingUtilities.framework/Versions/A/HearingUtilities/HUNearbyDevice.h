@class IDSDevice, NSString, NSMutableDictionary, NSMutableArray;

@interface HUNearbyDevice : NSObject

@property (retain, nonatomic) NSMutableArray *registeredDomains;
@property (retain, nonatomic) NSMutableArray *updateDomains;
@property (copy) NSMutableDictionary *state;
@property (retain, nonatomic) NSString *identifierWithoutDevice;
@property (retain, nonatomic) IDSDevice *idsDevice;
@property (nonatomic) char isSCIDSService;

+ (id)nearbyDeviceWithIDSDevice:(id)a0;
+ (id)nearbyDeviceWithIDSIdentifier:(id)a0;

- (id)description;
- (char)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)identifier;
- (id)uniqueIdentifier;
- (char)isCompanion;
- (id)initWithIDSDevice:(id)a0;
- (char)isWatch;
- (id)stateForDomain:(id)a0;
- (void)setState:(id)a0 forDomain:(id)a1;
- (id)initWithIDSIdentifier:(id)a0;
- (id)deviceTypeDescription;
- (char)equalsToIdentifier:(id)a0;

@end
