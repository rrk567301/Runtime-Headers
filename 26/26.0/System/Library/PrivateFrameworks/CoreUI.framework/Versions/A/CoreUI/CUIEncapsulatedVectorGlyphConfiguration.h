@interface CUIEncapsulatedVectorGlyphConfiguration : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ backing;
}

+ (id)newAutomaticCenterConfigurationForEncapsulation:(id)a0 adjustX:(BOOL)a1 adjustY:(BOOL)a2 sizeAdjustment:(long long)a3 coordinateSystem:(long long)a4;
+ (id)newMetricCenterConfigurationForEncapsulation:(id)a0 offsetX:(double)a1 offsetY:(double)a2 scaleFactor:(double)a3 coordinateSystem:(long long)a4;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;

@end
