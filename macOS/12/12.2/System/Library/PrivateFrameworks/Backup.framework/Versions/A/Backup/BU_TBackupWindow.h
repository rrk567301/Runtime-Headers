@class NSString;

@interface BU_TBackupWindow : NSWindow <NSUserInterfaceItemIdentification>

@property (copy) NSString *identifier;

- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (id)accessibilityActionNames;
- (void)accessibilityPerformAction:(id)a0;
- (BOOL)_allowsOrdering;

@end
