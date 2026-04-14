@interface ADImageDimensions : NSObject <NSCopying>

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;

+ (id)imageDimensionsWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
