@interface MOPhotosLayoutInvalidationContext : UXCollectionViewLayoutInvalidationContext

@property char settingsChanged;

- (char)invalidateEverything;

@end
