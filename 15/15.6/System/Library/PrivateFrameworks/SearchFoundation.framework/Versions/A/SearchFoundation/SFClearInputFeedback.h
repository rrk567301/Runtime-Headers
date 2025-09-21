@interface SFClearInputFeedback : SFFeedback

@property (nonatomic) unsigned long long triggerEvent;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEvent:(unsigned long long)a0;

@end
