@class NSString, RBShaderLibrary;

@interface RBShader : NSObject <NSCopying, RBEncodable, RBDecodable> {
    struct objc_ptr<RBShaderLibrary *> { RBShaderLibrary *_p; } _library;
    struct Closure { struct refcounted_ptr<const RB::CustomShader::Function> { struct Function *_p; } function; struct vector<RB::CustomShader::Value, 4UL, unsigned long> { unsigned char _p[128]; struct Value *_p; unsigned long long _size; unsigned long long _capacity; } args; struct objc_ptr<id> { id _p; } cifilter_provider; } _fn_args;
    struct unique_ptr<CGAffineTransform, std::default_delete<CGAffineTransform>> { struct CGAffineTransform *__ptr_; } _cifilter_ctm;
}

@property (readonly, nonatomic) RBShaderLibrary *library;
@property (nonatomic) int type;
@property (readonly, copy, nonatomic) NSString *function;
@property (readonly, nonatomic) unsigned long long numberOfArguments;
@property (copy, nonatomic) id /* block */ CIFilterProvider;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } CIFilterCTM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodedObjectWithData:(id)a0 delegate:(id)a1 error:(id *)a2;

- (struct { unsigned int x0; unsigned int x1; unsigned long long x2; void *x3; int x4; })argumentAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodedDataForDelegate:(id)a0 error:(id *)a1;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (float)argumentHeadroomAtIndex:(unsigned long long)a0;
- (id)initWithLibrary:(id)a0 function:(id)a1;
- (id)initWithSystemShader:(id)a0;
- (void)removeAllArguments;
- (void)setArgumentBytes:(const void *)a0 atIndex:(unsigned long long)a1 type:(unsigned int)a2 count:(unsigned long long)a3 flags:(unsigned int)a4;
- (void)setArgumentColorSpace:(int)a0 atIndex:(unsigned long long)a1;
- (void)setArgumentData:(id)a0 atIndex:(unsigned long long)a1 type:(unsigned int)a2 flags:(unsigned int)a3;
- (void)setArgumentHeadroom:(float)a0 atIndex:(unsigned long long)a1;

@end
