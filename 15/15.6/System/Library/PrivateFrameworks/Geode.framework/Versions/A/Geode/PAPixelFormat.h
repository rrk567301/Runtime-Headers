@class NSString;

@interface PAPixelFormat : NSObject <PAPixelFormat> {
    struct PixelFormat { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } _name; struct PixelSpace { struct vector<PA::PixelComponent, std::allocator<PA::PixelComponent>> { struct PixelComponent *__begin_; struct PixelComponent *__end_; struct __compressed_pair<PA::PixelComponent *, std::allocator<PA::PixelComponent>> { struct PixelComponent *__value_; } __end_cap_; } _components; } _space; struct vector<PA::PixelLayout, std::allocator<PA::PixelLayout>> { struct PixelLayout *__begin_; struct PixelLayout *__end_; struct __compressed_pair<PA::PixelLayout *, std::allocator<PA::PixelLayout>> { struct PixelLayout *__value_; } __end_cap_; } _planes; } _format;
}

@property (readonly) NSString *name;
@property (readonly) unsigned long long numberOfComponents;
@property (readonly) unsigned long long bitsPerPixel;
@property (readonly) unsigned long long bitsPerSample;
@property (readonly) char hasAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)RGBA16h;
+ (id)RGBA32f;
+ (id)BGRX8u;
+ (id)RGBA16u;
+ (id)BGRA8u;
+ (id)RGB16u;
+ (id)XRGB10u;
+ (id)YpCbCr8u_422;
+ (id)_pixelFormatWithDGFormat:(int)a0;
+ (id)inputFormatWithDGFormat:(int)a0;
+ (id)outputFormatWithColorSpace:(struct CGColorSpace { } *)a0 bitsPerSample:(unsigned long long)a1;
+ (id)outputFormatWithColorSpace:(struct CGColorSpace { } *)a0 bitsPerSample:(unsigned long long)a1 hasAlpha:(char)a2;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned int)CGBitmapInfo;
- (int)CIFormat;
- (char)isEqualToPixelFormat:(id)a0;
- (id)initWithPixelFormat:(const void *)a0;
- (int)DGFormat;

@end
