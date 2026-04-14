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

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (BOOL)canUpdateToConfiguration:(id)a0;
- (id)initWithAllowedDevices:(unsigned long long)a0 sessionKey:(id)a1 asAnchor:(BOOL)a2 regions:(id)a3;
- (id)description;
- (id)init;
- (id)initWithRegions:(id)a0;
- (void)_updateRegionDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;

@end
