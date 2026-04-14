@class NSString, NSMutableDictionary;

@interface CATState : NSObject {
    NSMutableDictionary *mTransitionByTriggeringEvent;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) SEL enterAction;
@property (nonatomic) SEL exitAction;

+ (id)new;

- (void)addTransitionToState:(id)a0 triggeringEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (id)description;
- (void)addTransitionToState:(id)a0 triggeringEvent:(id)a1 action:(SEL)a2;
- (id)transitionWithTriggeringEvent:(id)a0;

@end
