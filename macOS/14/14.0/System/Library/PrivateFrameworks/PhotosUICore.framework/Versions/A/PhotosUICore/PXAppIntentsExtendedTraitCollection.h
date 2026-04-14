@interface PXAppIntentsExtendedTraitCollection : PXExtendedTraitCollection

@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) double displayScale;

- (long long)layoutSizeClass;
- (id)initWithUserInterfaceStyle:(long long)a0 displayScale:(double)a1;
- (long long)layoutSizeSubclass;
- (void)registerObservations;
- (void)unregisterObservations;

@end
