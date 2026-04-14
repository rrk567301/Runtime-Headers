@protocol PXStoryClip;

@interface PXStoryClipLayoutReuseIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) id<PXStoryClip> clip;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)hasResourceEqualTo:(id)a0;
- (id)initWithClip:(id)a0;

@end
