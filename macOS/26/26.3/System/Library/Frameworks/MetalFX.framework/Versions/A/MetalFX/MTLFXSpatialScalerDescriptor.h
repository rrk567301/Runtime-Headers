@interface MTLFXSpatialScalerDescriptor : NSObject <NSCopying>

@property unsigned long long version;
@property (nonatomic) unsigned long long colorTextureFormat;
@property (nonatomic) unsigned long long outputTextureFormat;
@property (nonatomic) unsigned long long inputWidth;
@property (nonatomic) unsigned long long inputHeight;
@property (nonatomic) unsigned long long outputWidth;
@property (nonatomic) unsigned long long outputHeight;
@property (nonatomic) long long colorProcessingMode;

+ (BOOL)supportsDevice:(id)a0;
+ (unsigned long long)colorTextureUsage;
+ (unsigned long long)inputTextureUsage;
+ (unsigned long long)outputTextureUsage;
+ (BOOL)supportsMetal4FX:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)getInputTextureFormat;
- (id)newSpatialScalerWithDevice:(id)a0;
- (id)newSpatialScalerWithDevice:(id)a0 compiler:(id)a1;
- (void)setInputTextureFormat:(unsigned long long)a0;

@end
