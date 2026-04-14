@class NSString, AXFUIElement;

@interface AXKFoundationAction : AXKBaseAction

@property (copy, nonatomic) NSString *accessibilityActionName;
@property (copy, nonatomic) AXFUIElement *axfUIElement;

+ (id)actionWithName:(id)a0 uiElement:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)actionDescription;
- (id)actionName;
- (BOOL)mainWithElementController:(id)a0;

@end
