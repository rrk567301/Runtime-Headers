@class NSDictionary;

@interface VCPVideoInterpolationConfiguration : NSObject {
    struct VideoEnhancerModel { int index_; int scale_factor_; int input_width_; int input_height_; int model_input_width_; int model_input_height_; int output_width_; int output_height_; int model_output_width_; int model_output_height_; BOOL reshape_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } path_; struct __CFDictionary *input_buffer_attributes_; struct __CFDictionary *output_buffer_attributes_; } model;
}

@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long pixfmt;
@property (readonly, nonatomic) long long spatialScaleFactor;
@property (readonly, nonatomic) long long maxTemporalExponentFactor;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) NSDictionary *destinationPixelBufferAttributes;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithWidth:(long long)a0 height:(long long)a1 pixelFormat:(long long)a2 spatialScaleFactor:(long long)a3;
- (void)setMaxTemporalExponentialFactor:(long long)a0;
- (const void *)getModel;

@end
