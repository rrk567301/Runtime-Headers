@class NSArray;

@interface VisionCoreTensorShape : NSObject <NSCopying, NSSecureCoding> {
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; unsigned long long *__cap_; } _sizes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *sizesAsNSNumberArray;
@property (readonly, nonatomic) unsigned long long rank;
@property (readonly, nonatomic) const unsigned long long *sizes;
@property (readonly, nonatomic) unsigned long long elementCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)getOneDimensionalArrayDimensionIndex:(unsigned long long *)a0 error:(id *)a1;
- (id)initWithBatchNumber:(unsigned long long)a0 channels:(unsigned long long)a1 height:(unsigned long long)a2 width:(unsigned long long)a3;
- (id)initWithSizes:(const unsigned long long *)a0 rank:(unsigned long long)a1;
- (id)initWithPixelFormatType:(unsigned int)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (id)initWithImageChannels:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;

@end
