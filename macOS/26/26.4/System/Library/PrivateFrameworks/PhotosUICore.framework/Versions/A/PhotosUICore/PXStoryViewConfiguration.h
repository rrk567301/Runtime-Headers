@class PXExtendedTraitCollection, UXViewController, PXStoryConfiguration;

@interface PXStoryViewConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) PXStoryConfiguration *configuration;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (weak, nonatomic) UXViewController *containerViewController;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 extendedTraitCollection:(id)a1;
- (id)init;

@end
