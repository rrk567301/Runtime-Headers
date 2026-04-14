@class IDSDevice, NSString, NSMutableDictionary, NSMutableArray;

@interface HUNearbyDevice : NSObject

@property (retain, nonatomic) NSMutableArray *registeredDomains;
@property (retain, nonatomic) NSMutableArray *updateDomains;
@property (copy) NSMutableDictionary *state;
@property (retain, nonatomic) NSString *identifierWithoutDevice;
@property (retain, nonatomic) IDSDevice *idsDevice;
@property (nonatomic) BOOL isSCIDSService;

+ (id)nearbyDeviceWithIDSDevice:(id)a0;
+ (id)nearbyDeviceWithIDSIdentifier:(id)a0;

- (BOOL)isWatch;
- (BOOL)isiPad;
- (id)uniqueIdentifier;
- (BOOL)isCompanion;
- (id)identifier;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isiPhone;
- (id)initWithIDSDevice:(id)a0;
- (id)stateForDomain:(id)a0;
- (void)setState:(id)a0 forDomain:(id)a1;
- (id)initWithIDSIdentifier:(id)a0;
- (id)deviceTypeDescription;
- (BOOL)equalsToIdentifier:(id)a0;

@end
