@class NSString;

@interface ICMTableRowAccessibilityElement : ICMTableCellGroupAccessibilityElement <NSAccessibilityRow>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (id)accessibilityRole;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHeader;
- (long long)accessibilityIndex;
- (id)accessibilityParent;
- (id)accessibilitySubrole;
- (id)cellElements;

@end
