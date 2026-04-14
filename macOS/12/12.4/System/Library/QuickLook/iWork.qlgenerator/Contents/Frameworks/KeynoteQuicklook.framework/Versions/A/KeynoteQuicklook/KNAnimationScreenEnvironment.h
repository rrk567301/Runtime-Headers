@protocol MTLDevice;

@interface KNAnimationScreenEnvironment : NSObject <NSCopying>

@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) unsigned int displayID;
@property (readonly, nonatomic) id<MTLDevice> metalDevice;
@property (nonatomic) double pixelAspectRatio;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;

@end
