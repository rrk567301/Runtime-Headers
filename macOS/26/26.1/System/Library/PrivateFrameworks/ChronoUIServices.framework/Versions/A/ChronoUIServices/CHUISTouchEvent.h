@interface CHUISTouchEvent : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL baseContentTouchedDown;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithBaseContentTouchedDown:(BOOL)a0;

@end
