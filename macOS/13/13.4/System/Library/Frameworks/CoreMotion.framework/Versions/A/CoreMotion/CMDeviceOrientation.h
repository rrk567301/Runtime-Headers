@interface CMDeviceOrientation : CMLogItem {
    int fOrientation;
}

@property (readonly, nonatomic) int orientation;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOrientation:(int)a0 andTimestamp:(double)a1;

@end
