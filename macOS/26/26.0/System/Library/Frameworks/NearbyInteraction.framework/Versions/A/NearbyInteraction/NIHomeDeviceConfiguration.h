@class NSData, NSArray, NSString;

@interface NIHomeDeviceConfiguration : NIConfiguration {
    NSArray *_monitoredRegions;
    NSString *_regionDescription;
}

@property long long antennaDiversityOverride;
@property unsigned long long allowedDevices;
@property (copy) NSData *sessionKey;
@property (getter=isAnchor) BOOL anchor;
@property (copy) NSArray *monitoredRegions;
@property long long minimumPreferredUpdatedRate;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)initWithAllowedDevices:(unsigned long long)a0 sessionKey:(id)a1 asAnchor:(BOOL)a2 regions:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void)_updateRegionDescription;
- (id)descriptionInternal;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithRegions:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)canUpdateToConfiguration:(id)a0;
- (void).cxx_destruct;

@end
