@interface CCTrackableAnchorData : CCData {
    BOOL _isEnabled[2];
    struct { void /* unknown type, empty encoding */ columns[4]; } _trackableAnchorTransformMatrix[2];
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
