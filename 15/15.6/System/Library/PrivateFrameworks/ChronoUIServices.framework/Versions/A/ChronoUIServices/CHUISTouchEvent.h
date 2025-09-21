@interface CHUISTouchEvent : NSObject <NSCopying>

@property (readonly, nonatomic) char baseContentTouchedDown;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithBaseContentTouchedDown:(char)a0;

@end
