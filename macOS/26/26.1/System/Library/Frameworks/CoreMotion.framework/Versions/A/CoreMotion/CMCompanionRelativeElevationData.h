@class NSNumber;

@interface CMCompanionRelativeElevationData : CMLogItem {
    id _internal;
}

@property (readonly, nonatomic) NSNumber *companionRelativeElevation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimestamp:(double)a0 companionRelativeElevation:(float)a1;

@end
