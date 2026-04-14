@interface SearchForSportsIntentResponse : INIntentResponse

@property (nonatomic) long long code;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
