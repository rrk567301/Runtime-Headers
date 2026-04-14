@interface CCIntermediateWarpSpaceData : CCData {
    struct CCSpaceMappingStruct { long long mappingType; struct { void /* unknown type, empty encoding */ columns[3]; } homographyMatrix3x3; struct { void /* unknown type, empty encoding */ columns[4]; } homographyMatrix4x4; struct { void /* unknown type, empty encoding */ columns[4]; } homographyMatrix; long long controlFlags; } _spaceMappingsArray[2];
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
