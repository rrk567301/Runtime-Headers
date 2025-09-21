@interface DisambiguateActionsIntentResponse : INIntentResponse

@property (nonatomic) long long code;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
