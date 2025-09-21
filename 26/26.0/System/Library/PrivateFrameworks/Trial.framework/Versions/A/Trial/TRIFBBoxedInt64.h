@interface TRIFBBoxedInt64 : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) const struct BoxedInt64 { long long x0; } *cppPointer;
@property (readonly, nonatomic) long long val;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)init_;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithVal:(long long)a0;

@end
