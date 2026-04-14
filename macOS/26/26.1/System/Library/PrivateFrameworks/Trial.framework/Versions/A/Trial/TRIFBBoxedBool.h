@interface TRIFBBoxedBool : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) const struct BoxedBool { unsigned char x0; } *cppPointer;
@property (readonly, nonatomic) BOOL val;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init_;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithVal:(BOOL)a0;

@end
