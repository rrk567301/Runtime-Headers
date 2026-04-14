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
- (id)descriptionInternal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateRegionDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithRegions:(id)a0;
- (id)init;
- (id)initWithAllowedDevices:(unsigned long long)a0 sessionKey:(id)a1 asAnchor:(BOOL)a2 regions:(id)a3;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
