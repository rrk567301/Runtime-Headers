@class NSString;

@interface NIRegionPredicate : NSObject <NSCopying, NSSecureCoding> {
    long long _devicePresencePreset;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property long long regionSizeCategory;
@property (readonly) float radius;
@property long long preferredUpdateRate;
@property BOOL requiresUserIntent;
@property BOOL coarseEstimation;

+ (BOOL)_isExecuteRegion:(id)a0;

- (id)initWithName:(id)a0 regionSizeCategory:(long long)a1 radius:(float)a2 preferredUpdateRate:(long long)a3 requiresUserIntent:(BOOL)a4 devicePresencePreset:(long long)a5;
- (id)initWithName:(id)a0 regionSizeCategory:(long long)a1 radius:(float)a2 preferredUpdateRate:(long long)a3 requiresUserIntent:(BOOL)a4 coarseEstimation:(BOOL)a5 devicePresencePreset:(long long)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 regionSizeCategory:(long long)a1 radius:(float)a2 preferredUpdateRate:(long long)a3 requiresUserIntent:(BOOL)a4;
- (void)encodeWithCoder:(id)a0;
- (long long)devicePresencePreset;
- (id)initWithName:(id)a0 devicePresencePreset:(long long)a1;
- (id)description;
- (id)descriptionInternal;
- (void)setDevicePresencePreset:(long long)a0;
- (id)initWithName:(id)a0 radius:(float)a1 preferredUpdateRate:(long long)a2;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 radius:(float)a1 preferredUpdateRate:(long long)a2 requiresUserIntent:(BOOL)a3;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 radius:(float)a1 preferredUpdateRate:(long long)a2 requiresUserIntent:(BOOL)a3 devicePresencePreset:(long long)a4;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 radius:(float)a1;

@end
