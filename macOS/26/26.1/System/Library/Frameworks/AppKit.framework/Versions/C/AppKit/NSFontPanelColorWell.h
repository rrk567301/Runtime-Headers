@interface NSFontPanelColorWell : NSColorWell

+ (Class)_visualProviderClass;

- (id)__visualProvider;
- (BOOL)_ownsColorPanelExclusively;
- (void)_windowChangedKeyState;
- (id)accessibilityValueAttribute;

@end
