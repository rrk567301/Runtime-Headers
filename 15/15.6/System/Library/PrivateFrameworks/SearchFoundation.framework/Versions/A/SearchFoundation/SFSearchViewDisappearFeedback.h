@interface SFSearchViewDisappearFeedback : SFFeedback

@property (nonatomic) long long viewDisappearEvent;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEvent:(long long)a0;

@end
