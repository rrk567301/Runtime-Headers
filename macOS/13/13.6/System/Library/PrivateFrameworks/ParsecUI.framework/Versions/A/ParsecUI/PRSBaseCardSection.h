@class SFCardSection, SFPunchout;

@interface PRSBaseCardSection : NSObject

@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) SFPunchout *punchout;
@property (nonatomic) BOOL hideDivider;
@property (retain, nonatomic) SFCardSection *sfCardSection;

+ (id)sectionWithData:(id)a0 responseDictionary:(id)a1;

- (void).cxx_destruct;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;

@end
