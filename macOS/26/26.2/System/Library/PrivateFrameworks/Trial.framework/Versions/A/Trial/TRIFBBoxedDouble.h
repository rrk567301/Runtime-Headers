@interface TRIFBBoxedDouble : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) const struct BoxedDouble { double x0; } *cppPointer;
@property (readonly, nonatomic) double val;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)init_;
- (id)initWithVal:(double)a0;

@end
