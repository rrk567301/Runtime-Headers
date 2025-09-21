@class NSString;

@interface FMLDevice : NSObject

@property (copy) NSString *identifier;
@property (copy) NSString *deviceName;
@property (copy) NSString *idsDeviceId;
@property char isActive;
@property char isThisDevice;
@property char isCompanion;
@property char isAutoMeCapable;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)comparisonIdentifier;
- (id)initWithIdentifier:(id)a0 deviceName:(id)a1 idsDeviceId:(id)a2 isActive:(char)a3 isThisDevice:(char)a4 isCompanion:(char)a5 isAutoMeCapable:(char)a6;

@end
