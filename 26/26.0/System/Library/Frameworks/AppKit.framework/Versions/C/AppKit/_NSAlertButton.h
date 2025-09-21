@interface _NSAlertButton : NSButton {
    BOOL _hasCustomAccessibilityIdentifier;
}

+ (Class)cellClass;

- (void)setAccessibilityIdentifier:(id)a0;
- (void)setTag:(long long)a0;
- (void)_setMouseTrackingForCell:(id)a0;

@end
