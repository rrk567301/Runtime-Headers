@interface SOAddRemoveActionBar : NSSegmentedControl

+ (Class)cellClass;

- (id)accessibilityIdentifier;
- (BOOL)isConfigEnabled;
- (void)setAddEnabled:(BOOL)a0;
- (void)setRemoveEnabled:(BOOL)a0;
- (void)setConfigEnabled:(BOOL)a0;
- (BOOL)isAddEnabled;
- (BOOL)isRemoveEnabled;
- (BOOL)isAddSelected;
- (BOOL)isRemoveSelected;
- (BOOL)isConfigSelected;

@end
