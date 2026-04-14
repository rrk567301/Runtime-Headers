@class SFResultSection;

@interface SFVisibleSectionHeaderFeedback : SFFeedback

@property (copy, nonatomic) SFResultSection *section;
@property (nonatomic) unsigned long long headerType;

+ (BOOL)supportsSecureCoding;

- (id)initWithSection:(id)a0 headerType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
