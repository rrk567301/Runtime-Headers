@class CMIStyleEngineImage;

@interface CMIStyleEngineDownscaledImageSource : NSObject <NSCopying>

@property (readonly, weak, nonatomic) CMIStyleEngineImage *sourceImage;
@property (readonly, nonatomic) unsigned long long filter;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSourceImage:(id)a0 filter:(unsigned long long)a1;

@end
