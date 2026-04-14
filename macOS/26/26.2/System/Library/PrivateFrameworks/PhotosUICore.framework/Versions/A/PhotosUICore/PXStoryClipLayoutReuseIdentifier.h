@protocol PXStoryClip;

@interface PXStoryClipLayoutReuseIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) id<PXStoryClip> clip;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)hasResourceEqualTo:(id)a0;
- (id)initWithClip:(id)a0;

@end
