@class NSString, AXFUIElement, NSAttributedString;

@interface AXKScreenDescriberReadableContent : NSObject

@property (readonly, nonatomic) AXFUIElement *element;
@property (readonly, nonatomic) AXFUIElement *applicationElement;
@property (readonly, nonatomic) AXFUIElement *windowElement;
@property (readonly, nonatomic) AXFUIElement *topLevelElement;
@property (readonly, nonatomic) NSAttributedString *content;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, copy, nonatomic) NSString *contentTitle;

- (void).cxx_destruct;
- (id)initWithElement:(id)a0 applicationElement:(id)a1 windowElement:(id)a2 topLevelElement:(id)a3 content:(id)a4 contentTitle:(id)a5 applicationIdentifier:(id)a6 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7;

@end
