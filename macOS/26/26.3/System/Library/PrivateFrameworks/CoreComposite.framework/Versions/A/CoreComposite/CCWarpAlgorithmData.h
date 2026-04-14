@interface CCWarpAlgorithmData : CCData {
    long long _controlFlags;
    long long _mode;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
