@class NSNumber;

@interface CMKappaData : CMLogItem {
    int fState;
}

@property (readonly, nonatomic) NSNumber *state;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(int)a0;

@end
