@class NSString;

@interface SFDidGoToSiteFeedback : SFFeedback

@property (copy, nonatomic) NSString *input;
@property (nonatomic) unsigned long long triggerEvent;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInput:(id)a0;

@end
