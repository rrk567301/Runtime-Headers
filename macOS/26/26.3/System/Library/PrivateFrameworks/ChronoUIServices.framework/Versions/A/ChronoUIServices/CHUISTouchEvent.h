@interface CHUISTouchEvent : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL baseContentTouchedDown;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithBaseContentTouchedDown:(BOOL)a0;

@end
