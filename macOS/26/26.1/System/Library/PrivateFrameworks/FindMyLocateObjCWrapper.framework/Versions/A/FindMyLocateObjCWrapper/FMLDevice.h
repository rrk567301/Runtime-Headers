@class NSString;

@interface FMLDevice : NSObject

@property (copy) NSString *identifier;
@property (copy) NSString *deviceName;
@property (copy) NSString *idsDeviceId;
@property BOOL isActive;
@property BOOL isThisDevice;
@property BOOL isCompanion;
@property BOOL isAutoMeCapable;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)comparisonIdentifier;
- (id)initWithIdentifier:(id)a0 deviceName:(id)a1 idsDeviceId:(id)a2 isActive:(BOOL)a3 isThisDevice:(BOOL)a4 isCompanion:(BOOL)a5 isAutoMeCapable:(BOOL)a6;

@end
