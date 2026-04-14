@interface CRGExplicitPixelFormat : CRGPixelFormat {
    unsigned long long _mtlPixelFormat;
}

+ (id)mtlPixelFormat:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)asExplicit;
- (id)initWithMTLPixelFormat:(unsigned long long)a0;

@end
