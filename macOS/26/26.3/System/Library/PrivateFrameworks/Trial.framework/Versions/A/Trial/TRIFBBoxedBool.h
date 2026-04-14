@interface TRIFBBoxedBool : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) const struct BoxedBool { unsigned char x0; } *cppPointer;
@property (readonly, nonatomic) BOOL val;

- (id)init_;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithVal:(BOOL)a0;

@end
