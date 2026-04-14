@class SFCard, NSString;

@interface SFCardViewAppearFeedback : SFFeedback

@property (retain, nonatomic) SFCard *card;
@property (nonatomic) unsigned int level;
@property (copy, nonatomic) NSString *fbr;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCard:(id)a0;

@end
