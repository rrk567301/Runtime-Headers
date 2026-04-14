@interface _NSToolbarButtonCell : NSButtonCell

+ (Class)_visualProviderClassForBezelConfiguration:(id)a0;

- (long long)nextState;
- (id)_effectiveSymbolConfiguration;
- (BOOL)_shouldDrawWithRollover;
- (id)accessibilityAttributeNames;
- (id)accessibilityRoleAttribute;
- (BOOL)refusesFirstResponder;

@end
