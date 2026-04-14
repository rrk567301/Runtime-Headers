@class NSString;

@interface NSFontPanelColorWell : NSColorWell <NSAccessibilityStaticText>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_visualProviderClass;

- (id)accessibilityValue;
- (id)accessibilityRole;
- (id)__visualProvider;
- (BOOL)_ownsColorPanelExclusively;
- (void)_windowChangedKeyState;

@end
