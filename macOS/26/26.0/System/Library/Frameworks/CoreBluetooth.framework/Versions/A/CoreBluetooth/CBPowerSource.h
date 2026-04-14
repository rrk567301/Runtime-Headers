@class NSString, NSMutableDictionary;

@interface CBPowerSource : NSObject <CUXPCCodable, NSSecureCoding, NSCopying, CBDictionaryCodable> {
    NSMutableDictionary *_componentMap;
    struct OpaqueIOPSPowerSourceID { } *_psID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned short batteryInfo;
@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned int internalFlags;
@property (nonatomic) unsigned short accessoryCategory;
@property (copy, nonatomic) NSString *accessoryID;
@property (nonatomic) unsigned int appearanceValue;
@property (readonly, nonatomic) NSMutableDictionary *components;
@property (nonatomic) unsigned char deviceType;
@property (nonatomic) long long familyCode;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) long long lowWarnLevel;
@property (nonatomic) double maxCapacity;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned short partID;
@property (copy, nonatomic) NSString *partName;
@property (nonatomic) BOOL present;
@property (nonatomic) unsigned int productID;
@property (nonatomic) long long sourceID;
@property (nonatomic) long long temperature;
@property (copy, nonatomic) NSString *transportType;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned short vendorID;
@property (nonatomic) unsigned char vendorIDSource;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (id)dictionaryRepresentation;
- (void)encodeWithXPCObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (int)publish;
- (BOOL)isAppleDevice;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasAllComponents;
- (BOOL)isAggregateComponent;
- (BOOL)combinedPublish;
- (void)_setPartName;
- (unsigned int)_updateAggregateWithComponent:(id)a0;
- (id)componentWithPartID:(unsigned short)a0;
- (id)initWithPowerSourceDetails:(id)a0 internalFlags:(unsigned int)a1;
- (void)invalidateComponentWithPartID:(unsigned short)a0;
- (void)releaseSource;
- (void)removeBatteryInfo;
- (void)removeFlags;
- (void)updatePartID;
- (unsigned int)updateWithCBPowerSource:(id)a0;

@end
