@protocol PXStoryClip;

@interface PXStoryClipLayoutReuseIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) id<PXStoryClip> clip;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithClip:(id)a0;
- (BOOL)hasResourceEqualTo:(id)a0;

@end
