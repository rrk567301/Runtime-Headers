@interface MPSNDArrayQuantizationDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned int quantizationDataType;
@property (nonatomic) int quantizationScheme;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithDataType:(unsigned int)a0 quantizationScheme:(int)a1;

@end
