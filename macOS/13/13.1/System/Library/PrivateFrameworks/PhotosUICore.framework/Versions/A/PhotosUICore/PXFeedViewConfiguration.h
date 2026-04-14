@class UXViewController, PXFeedConfiguration, PXExtendedTraitCollection;

@interface PXFeedViewConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) PXFeedConfiguration *feedConfiguration;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (weak, nonatomic) UXViewController *containerViewController;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithFeedConfiguration:(id)a0 extendedTraitCollection:(id)a1;

@end
