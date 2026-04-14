@class NSArray;

@interface E5RunnerImageDataObjC : NSObject

@property (readonly) struct ImageData { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct { unsigned long long *__cap_; } ; } shape; void /* unknown type, blank encoding */ *data; } imageData;
@property (readonly) void /* unknown type, blank encoding */ *data;
@property (readonly, copy) NSArray *shape;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithShape:(id)a0 data:(void /* unknown type, blank encoding */ *)a1;

@end
