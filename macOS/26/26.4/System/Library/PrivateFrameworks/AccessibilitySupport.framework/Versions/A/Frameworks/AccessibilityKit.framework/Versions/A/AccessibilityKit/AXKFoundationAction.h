@class NSString, AXFUIElement;

@interface AXKFoundationAction : AXKBaseAction

@property (copy, nonatomic) NSString *accessibilityActionName;
@property (copy, nonatomic) AXFUIElement *axfUIElement;

+ (id)actionWithName:(id)a0 uiElement:(id)a1;

- (id)actionDescription;
- (void).cxx_destruct;
- (id)description;
- (id)actionName;
- (BOOL)mainWithElementController:(id)a0;

@end
