@interface CMOnBodyStatus : CMLogItem {
    int fResult;
    int fConfidence;
}

@property (readonly, nonatomic) long long result;
@property (readonly, nonatomic) long long confidence;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOnBodyResult:(int)a0 confidence:(int)a1 timestamp:(double)a2;

@end
