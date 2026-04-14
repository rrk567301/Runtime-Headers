@interface SFSearchViewDisappearFeedback : SFFeedback

@property (nonatomic) long long viewDisappearEvent;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEvent:(long long)a0;

@end
