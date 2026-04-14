@class NSArray, NSString;

@interface AXKCompositeAction : AXKBaseAction

@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *actionName;
@property (copy, nonatomic) NSString *actionDescription;

+ (id)actionWithName:(id)a0 description:(id)a1;
+ (id)actionWithActions:(id)a0 name:(id)a1 description:(id)a2;

- (void).cxx_destruct;
- (void)appendAction:(id)a0;
- (void)appendActions:(id)a0;

@end
