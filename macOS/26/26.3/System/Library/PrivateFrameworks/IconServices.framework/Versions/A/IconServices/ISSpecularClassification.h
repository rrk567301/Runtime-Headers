@interface ISSpecularClassification : NSObject {
    struct CGImage { } *_cgImage;
    BOOL _useAlphaOnly;
    struct __CFData { } *_data;
    char *_ucharMask;
    struct { int width; int height; int padding; BOOL usesUchar4LastComponent; union { void *uchar4Array; char *ucharArray; } ; } _mask;
}

- (void)dealloc;
- (BOOL)_prepareMaskIfNeeded;
- (BOOL)classifySpecular;
- (BOOL)classifySpecularWithDebug:(void *)a0;
- (struct CGImage { } *)createSpecularImage;
- (id)initWithSpecularImage:(struct CGImage { } *)a0 useAlphaOnly:(BOOL)a1;

@end
