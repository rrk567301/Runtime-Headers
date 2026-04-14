@interface CRGExplicitDimensions : CRGDimensions {
    void /* unknown type, empty encoding */ _dimensions;
    void /* unknown type, empty encoding */ _normScale;
}

+ (id)size:(SEL)a0;
+ (id)width:(unsigned long long)a0 height:(unsigned long long)a1;

- (id)description;
- (id)initWithSize:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (id)asExplicit;

@end
