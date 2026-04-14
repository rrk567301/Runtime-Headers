@class NIRegionPredicate;

@interface NIDevicePresenceConfiguration : NIConfiguration

@property unsigned long long monitoringOption;
@property unsigned long long allowedDevices;
@property (readonly) NIRegionPredicate *innerBoundary;
@property (readonly) NIRegionPredicate *outerBoundary;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_validateRegionPredicates:(id)a0 outer:(id)a1;
+ (id)_NIDevicePresenceMonitoringOptionToString:(unsigned long long)a0;
+ (BOOL)_validateRegionIsPreset:(id)a0;
+ (float)_radiusFromDevicePresencePreset:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)descriptionInternal;
- (id)initWithInnerBoundary:(id)a0 outerBoundary:(id)a1 error:(id *)a2;
- (id)initWithInnerBoundary:(id)a0 outerBoundary:(id)a1 monitoringOption:(unsigned long long)a2 allowedDevices:(unsigned long long)a3 error:(id *)a4;

@end
