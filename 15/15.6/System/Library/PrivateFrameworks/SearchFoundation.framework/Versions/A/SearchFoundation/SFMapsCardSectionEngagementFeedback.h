@interface SFMapsCardSectionEngagementFeedback : SFCardSectionEngagementFeedback

@property (nonatomic) int feedbackType;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFeedbackType:(int)a0;

@end
