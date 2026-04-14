@class PXStoryFeedConfiguration, UXViewController, PXExtendedTraitCollection;

@interface PXStoryFeedViewConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) PXStoryFeedConfiguration *feedConfiguration;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (weak, nonatomic) UXViewController *containerViewController;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFeedConfiguration:(id)a0 extendedTraitCollection:(id)a1;

@end
