@class NSArray;

@interface MLMultiArrayBufferLayout : NSObject {
    struct unique_ptr<CoreML::MultiArrayBufferLayout, std::default_delete<CoreML::MultiArrayBufferLayout>> { struct MultiArrayBufferLayout *__ptr_; } _bufferLayout;
}

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) NSArray *strides;

- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithShape:(id)a0 strides:(id)a1;
- (BOOL)isSubspaceOfBufferLayout:(id)a0;
- (long long)offsetOfScalarAtIndex:(long long)a0 contiguousScalars:(long long *)a1;

@end
