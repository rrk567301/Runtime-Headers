@class SFCard, NSString;

@interface SFCardViewAppearFeedback : SFFeedback

@property (retain, nonatomic) SFCard *card;
@property (nonatomic) unsigned int level;
@property (copy, nonatomic) NSString *fbr;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCard:(id)a0;

@end
