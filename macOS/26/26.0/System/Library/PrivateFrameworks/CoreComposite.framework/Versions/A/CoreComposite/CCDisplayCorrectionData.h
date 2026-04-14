@class CCTransformConstraint;

@interface CCDisplayCorrectionData : CCData {
    float _homographyDistance;
    BOOL _runtimeMattingDisabled;
    BOOL _runtimeZoomEnabled;
    struct { void /* unknown type, empty encoding */ columns[4]; } _displayLeftToDisplayRight;
    CCTransformConstraint *_transformConstraints[5];
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
