@protocol AXFAction;

@interface AXKFoundationAction : AXKBaseAction

@property (retain, nonatomic) id<AXFAction> action;

+ (id)actionWithAction:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)actionName;
- (id)actionDescription;
- (BOOL)mainWithElementController:(id)a0;

@end
