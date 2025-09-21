@class NSString;
@protocol WFState;

@interface WFStateMachineTransitionEvent : NSObject

@property (readonly, nonatomic) id<WFState> state;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic, getter=isValid) char valid;

+ (id)transitionEventWithState:(id)a0 reason:(id)a1 valid:(char)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithState:(id)a0 reason:(id)a1 valid:(char)a2;

@end
