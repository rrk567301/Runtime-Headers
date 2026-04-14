@interface SNOptional : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ object;
@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)initEmpty;
- (BOOL)isEqualToOptional:(id)a0;

@end
