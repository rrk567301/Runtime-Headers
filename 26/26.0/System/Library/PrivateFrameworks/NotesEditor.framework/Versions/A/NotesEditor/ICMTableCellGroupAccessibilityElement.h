@class NSUUID, ICTableAccessibilityController, NSArray;

@interface ICMTableCellGroupAccessibilityElement : NSAccessibilityElement

@property (copy, nonatomic) NSUUID *rowOrColumnIdentifier;
@property (weak, nonatomic) ICTableAccessibilityController *tableAXController;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) NSArray *cellElements;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)description;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityParent;
- (id)initWithID:(id)a0 tableAXController:(id)a1;

@end
