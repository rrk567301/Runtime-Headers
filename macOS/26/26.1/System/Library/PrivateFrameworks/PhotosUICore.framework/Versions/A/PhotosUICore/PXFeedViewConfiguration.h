@class UXViewController, PXFeedConfiguration, PXExtendedTraitCollection;

@interface PXFeedViewConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) PXFeedConfiguration *feedConfiguration;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (weak, nonatomic) UXViewController *containerViewController;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithFeedConfiguration:(id)a0 extendedTraitCollection:(id)a1;

@end
