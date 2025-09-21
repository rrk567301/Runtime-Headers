@interface ETImageDescriptorExtractor : NSObject {
    void *_plan;
    struct { void *plan; int network_index; } _net;
    void *_ctx;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _inputBlob;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _outputBlob;
    unsigned long long _targetWidth;
    unsigned long long _targetHeight;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } _inputName;
    unsigned long long *_inputShape;
}

@property float rotation_range;
@property float horizontal_flip;
@property float zoom_range;
@property float shear_range;
@property float contrast_range;
@property float brightness_range;
@property int nAugmentations;
@property int doBatchnormTuning;
@property unsigned long long descriptors_mem_cache_size;
@property unsigned long long descriptors_file_cache_size;

+ (id)VisionSceneNet_iOS10_Extractor;
+ (id)VisionSmartCamNet_iOS11_Extractor;
+ (id)inception_v3_Extractor;
+ (id)passthroughExtractor;

- (void).cxx_destruct;
- (id).cxx_construct;
- (int)numberOfChannels;
- (id)initWithNetwork:(id)a0;
- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })cropResizeInputImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (float *)extractDescriptorForDataPoint:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 freeWhenDone:(char)a1;
- (void)extractForDataPoint:(id)a0;

@end
