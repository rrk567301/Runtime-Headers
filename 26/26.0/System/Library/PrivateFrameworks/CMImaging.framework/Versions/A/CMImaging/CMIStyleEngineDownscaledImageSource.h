@class CMIStyleEngineImage;

@interface CMIStyleEngineDownscaledImageSource : NSObject <NSCopying>

@property (readonly, weak, nonatomic) CMIStyleEngineImage *sourceImage;
@property (readonly, nonatomic) unsigned long long filter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSourceImage:(id)a0 filter:(unsigned long long)a1;

@end
