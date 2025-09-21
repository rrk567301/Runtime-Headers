@interface CCTrackableAnchorData : CCData {
    BOOL _isEnabled[2];
    struct { void /* unknown type, empty encoding */ columns[4]; } _trackableAnchorTransformMatrix[2];
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
