@interface QLCacheHole : NSObject

@property (nonatomic) unsigned long long location;
@property (nonatomic) unsigned long long length;

+ (id)holeWithLocation:(unsigned long long)a0 length:(unsigned long long)a1;

- (id)description;
- (char)isEqual:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithLocation:(unsigned long long)a0 length:(unsigned long long)a1;
- (void)setLocation:(unsigned long long)a0 length:(unsigned long long)a1;

@end
