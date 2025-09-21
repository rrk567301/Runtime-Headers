@class NSArray;

@interface VisionCoreTensorShape : NSObject <NSCopying, NSSecureCoding> {
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _sizes;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSArray *sizesAsNSNumberArray;
@property (readonly, nonatomic) unsigned long long rank;
@property (readonly, nonatomic) const unsigned long long *sizes;
@property (readonly, nonatomic) unsigned long long elementCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (char)getOneDimensionalArrayDimensionIndex:(unsigned long long *)a0 error:(id *)a1;
- (id)initWithBatchNumber:(unsigned long long)a0 channels:(unsigned long long)a1 height:(unsigned long long)a2 width:(unsigned long long)a3;
- (id)initWithSizes:(const unsigned long long *)a0 rank:(unsigned long long)a1;
- (id)initWithImageChannels:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (id)initWithPixelFormatType:(unsigned int)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;

@end
