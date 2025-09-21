@interface SOAddRemoveActionBar : NSSegmentedControl

+ (Class)cellClass;

- (id)accessibilityIdentifier;
- (char)isConfigEnabled;
- (char)isRemoveEnabled;
- (char)isAddEnabled;
- (char)isAddSelected;
- (char)isConfigSelected;
- (char)isRemoveSelected;
- (void)setAddEnabled:(char)a0;
- (void)setConfigEnabled:(char)a0;
- (void)setRemoveEnabled:(char)a0;

@end
