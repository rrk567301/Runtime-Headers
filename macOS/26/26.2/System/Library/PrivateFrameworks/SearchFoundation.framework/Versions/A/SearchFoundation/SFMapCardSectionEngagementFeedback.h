@class NSData;

@interface SFMapCardSectionEngagementFeedback : SFCardSectionEngagementFeedback

@property (retain, nonatomic) NSData *modifiedPlacemarkData;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
