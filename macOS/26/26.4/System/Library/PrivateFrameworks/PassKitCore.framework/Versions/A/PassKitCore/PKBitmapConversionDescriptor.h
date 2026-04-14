@interface PKBitmapConversionDescriptor : NSObject

@property (copy, nonatomic) id /* block */ alphaInfoTransform;
@property (nonatomic) BOOL floatingComponents;
@property (readonly, nonatomic) unsigned char bitsPerComponent;
@property (readonly, nonatomic) unsigned int byteOrder;
@property (readonly, nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly, copy, nonatomic) id /* block */ colorTransformPolicy;

+ (id)create;
+ (id)create16Float;
+ (id)create32Float;
+ (id)create8Uint;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)convertContext:(id)a0;
- (id)convertFromContext:(id)a0;
- (id)convertImage:(struct CGImage { } *)a0;
- (void)setBitsPerComponent:(unsigned char)a0 withByteOrder:(unsigned int)a1;
- (void)setColorSpace:(struct CGColorSpace { } *)a0 withPolicy:(id /* block */)a1;

@end
