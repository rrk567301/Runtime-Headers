@class NSNumber;

@interface CMCompanionRelativeElevationData : CMLogItem {
    id _internal;
}

@property (readonly, nonatomic) NSNumber *companionRelativeElevation;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithTimestamp:(double)a0 companionRelativeElevation:(float)a1;

@end
