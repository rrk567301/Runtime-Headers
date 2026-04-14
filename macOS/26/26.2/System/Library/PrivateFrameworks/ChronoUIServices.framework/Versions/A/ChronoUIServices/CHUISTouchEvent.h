@interface CHUISTouchEvent : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL baseContentTouchedDown;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBaseContentTouchedDown:(BOOL)a0;

@end
