@protocol MTLBuffer;

@interface MTLMotionKeyframeData : NSObject

@property (retain, nonatomic) id<MTLBuffer> buffer;
@property (nonatomic) unsigned long long offset;

+ (id)data;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
