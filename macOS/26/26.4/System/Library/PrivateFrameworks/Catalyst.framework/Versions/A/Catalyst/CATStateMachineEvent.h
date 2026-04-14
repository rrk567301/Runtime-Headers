@interface CATStateMachineEvent : NSObject

@property (readonly, nonatomic) id trigger;
@property (readonly, nonatomic) id context;

+ (id)eventWithTrigger:(id)a0 context:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithEventTrigger:(id)a0 context:(id)a1;

@end
