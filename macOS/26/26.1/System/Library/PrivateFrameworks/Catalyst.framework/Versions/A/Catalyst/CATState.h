@class NSString, NSMutableDictionary;

@interface CATState : NSObject {
    NSMutableDictionary *mTransitionByTriggeringEvent;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) SEL enterAction;
@property (nonatomic) SEL exitAction;

+ (id)new;

- (void)addTransitionToState:(id)a0 triggeringEvent:(id)a1;
- (id)description;
- (id)transitionWithTriggeringEvent:(id)a0;
- (id)initWithName:(id)a0;
- (void)addTransitionToState:(id)a0 triggeringEvent:(id)a1 action:(SEL)a2;
- (void).cxx_destruct;
- (id)init;

@end
