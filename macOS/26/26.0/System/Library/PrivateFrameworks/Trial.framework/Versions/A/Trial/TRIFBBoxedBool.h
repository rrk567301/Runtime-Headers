@interface TRIFBBoxedBool : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) const struct BoxedBool { unsigned char x0; } *cppPointer;
@property (readonly, nonatomic) BOOL val;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)init_;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithVal:(BOOL)a0;

@end
