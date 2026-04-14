@class SFQueryUnderstandingParse;

@interface SFEndLocalSearchFeedback : SFEndSearchFeedback

@property (retain, nonatomic) SFQueryUnderstandingParse *quParse;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStartSearch:(id)a0;
- (id)initWithStartSearch:(id)a0 queryUnderstandingParse:(id)a1;

@end
