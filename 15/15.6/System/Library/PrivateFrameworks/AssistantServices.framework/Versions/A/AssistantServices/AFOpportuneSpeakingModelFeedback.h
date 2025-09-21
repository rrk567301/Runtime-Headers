@class NSDictionary, NSDate;

@interface AFOpportuneSpeakingModelFeedback : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *lastNegativeFeedback;
@property (retain, nonatomic) NSDictionary *negativeFeedbackByContact;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
