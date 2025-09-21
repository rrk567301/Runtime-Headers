@class NSString;

@interface NIRegionPredicate : NSObject <NSCopying, NSSecureCoding> {
    long long _devicePresencePreset;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *name;
@property long long regionSizeCategory;
@property (readonly) float radius;
@property long long preferredUpdateRate;
@property char requiresUserIntent;
@property char coarseEstimation;

+ (char)_isExecuteRegion:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)descriptionInternal;
- (long long)devicePresencePreset;
- (id)initWithName:(id)a0 devicePresencePreset:(long long)a1;
- (id)initWithName:(id)a0 radius:(float)a1;
- (id)initWithName:(id)a0 radius:(float)a1 preferredUpdateRate:(long long)a2;
- (id)initWithName:(id)a0 radius:(float)a1 preferredUpdateRate:(long long)a2 requiresUserIntent:(char)a3;
- (id)initWithName:(id)a0 radius:(float)a1 preferredUpdateRate:(long long)a2 requiresUserIntent:(char)a3 devicePresencePreset:(long long)a4;
- (id)initWithName:(id)a0 regionSizeCategory:(long long)a1 radius:(float)a2 preferredUpdateRate:(long long)a3 requiresUserIntent:(char)a4;
- (id)initWithName:(id)a0 regionSizeCategory:(long long)a1 radius:(float)a2 preferredUpdateRate:(long long)a3 requiresUserIntent:(char)a4 coarseEstimation:(char)a5 devicePresencePreset:(long long)a6;
- (id)initWithName:(id)a0 regionSizeCategory:(long long)a1 radius:(float)a2 preferredUpdateRate:(long long)a3 requiresUserIntent:(char)a4 devicePresencePreset:(long long)a5;
- (void)setDevicePresencePreset:(long long)a0;

@end
