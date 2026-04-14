@class SCRUIElement, NSAttributedString;

@interface SCRWebStitchedTextToken : NSObject

@property (copy, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (retain, nonatomic, getter=uiElement, setter=setUIElement:) SCRUIElement *uiElement;

- (id)description;
- (void).cxx_destruct;

@end
