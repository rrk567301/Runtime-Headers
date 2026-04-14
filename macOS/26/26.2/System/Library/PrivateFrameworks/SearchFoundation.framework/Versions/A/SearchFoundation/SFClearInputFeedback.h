@interface SFClearInputFeedback : SFFeedback

@property (nonatomic) unsigned long long triggerEvent;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEvent:(unsigned long long)a0;

@end
