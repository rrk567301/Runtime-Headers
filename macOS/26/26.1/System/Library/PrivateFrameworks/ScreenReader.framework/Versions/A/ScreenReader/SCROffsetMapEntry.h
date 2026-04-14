@interface SCROffsetMapEntry : NSObject <NSCopying>

@property (nonatomic) unsigned long long location;
@property (nonatomic) unsigned long long length;
@property (nonatomic) long long delta;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 delta:(long long)a1;

@end
