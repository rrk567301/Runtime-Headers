@class NSString;

@interface BU_TBackupWindow : NSWindow <NSUserInterfaceItemIdentification>

@property (copy) NSString *identifier;

- (char)_allowsOrdering;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (char)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3;

@end
