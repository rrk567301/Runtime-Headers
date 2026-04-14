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

- (BOOL)isiPad;
- (id)uniqueIdentifier;
- (BOOL)isiPhone;
- (BOOL)isCompanion;
- (id)identifier;
- (id)description;
- (id)name;
- (BOOL)isWatch;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIDSDevice:(id)a0;
- (id)stateForDomain:(id)a0;
- (void)setState:(id)a0 forDomain:(id)a1;
- (id)initWithIDSIdentifier:(id)a0;
- (id)deviceTypeDescription;
- (BOOL)equalsToIdentifier:(id)a0;

@end
