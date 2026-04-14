@interface TRIFBBoxedDouble : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) const struct BoxedDouble { double x0; } *cppPointer;
@property (readonly, nonatomic) double val;

- (id)init_;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithVal:(double)a0;

@end
