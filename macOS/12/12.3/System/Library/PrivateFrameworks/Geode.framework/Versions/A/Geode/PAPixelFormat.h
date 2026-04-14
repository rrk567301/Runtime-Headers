@class NSString;

@interface PAPixelFormat : NSObject <PAPixelFormat> {
    struct PixelFormat { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _name; struct PixelSpace { struct vector<PA::PixelComponent, std::allocator<PA::PixelComponent>> { struct PixelComponent *__begin_; struct PixelComponent *__end_; struct __compressed_pair<PA::PixelComponent *, std::allocator<PA::PixelComponent>> { struct PixelComponent *__value_; } __end_cap_; } _components; } _space; struct vector<PA::PixelLayout, std::allocator<PA::PixelLayout>> { struct PixelLayout *__begin_; struct PixelLayout *__end_; struct __compressed_pair<PA::PixelLayout *, std::allocator<PA::PixelLayout>> { struct PixelLayout *__value_; } __end_cap_; } _planes; } _format;
}

@property (readonly) NSString *name;
@property (readonly) unsigned long long numberOfComponents;
@property (readonly) unsigned long long bitsPerPixel;
@property (readonly) unsigned long long bitsPerSample;
@property (readonly) BOOL hasAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)outputFormatWithColorSpace:(struct CGColorSpace { } *)a0 bitsPerSample:(unsigned long long)a1 hasAlpha:(BOOL)a2;
+ (id)_pixelFormatWithDGFormat:(int)a0;
+ (id)outputFormatWithColorSpace:(struct CGColorSpace { } *)a0 bitsPerSample:(unsigned long long)a1;
+ (id)inputFormatWithDGFormat:(int)a0;
+ (id)BGRX8u;
+ (id)BGRA8u;
+ (id)RGB16u;
+ (id)RGBA16u;
+ (id)RGBA16h;
+ (id)RGBA32f;
+ (id)XRGB10u;
+ (id)YpCbCr8u_422;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned int)CGBitmapInfo;
- (int)CIFormat;
- (BOOL)isEqualToPixelFormat:(id)a0;
- (id)initWithPixelFormat:(const void *)a0;
- (int)DGFormat;

@end
