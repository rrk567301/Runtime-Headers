@interface _NSControlTargetAction : NSObject

@property (weak) id target;
@property SEL action;
@property unsigned long long eventMask;

- (void).cxx_destruct;
- (id)description;

@end
