@class NSDictionary;

@interface ANSTPixelBufferDescriptor : ANSTDescriptor

@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned int pixelFormatType;
@property (readonly, copy, nonatomic) NSDictionary *pixelBufferAttributes;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithName:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 pixelFormatType:(unsigned int)a3;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 pixelBufferAttributes:(id)a1 error:(id *)a2;
- (id)initWithName:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 pixelFormatType:(unsigned int)a3 pixelBufferAttributes:(id)a4 error:(id *)a5;
- (BOOL)validatePixelBuffer:(struct __CVBuffer { } *)a0;

@end
