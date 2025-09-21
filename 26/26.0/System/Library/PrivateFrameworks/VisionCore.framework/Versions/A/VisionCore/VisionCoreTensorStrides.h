@interface VisionCoreTensorStrides : NSObject <NSCopying, NSSecureCoding> {
    struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; long long *__cap_; } _byteOffsets;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long rank;
@property (readonly, nonatomic) const long long *byteOffsets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithShape:(id)a0 dataType:(unsigned long long)a1;
- (id)initWithByteOffsets:(const long long *)a0 rank:(unsigned long long)a1;
- (id)shapeForPackedElementsOfType:(unsigned long long)a0 error:(id *)a1;

@end
