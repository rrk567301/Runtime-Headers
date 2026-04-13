@class SGMContactResultSelectedInSpotlight, SGMNoResultSelectedInSpotlight, SGMOtherResultSelectedInSpotlight, SGMContactResultInSpotlight, NSMutableSet, SGMContactOpportunityInSpotlight;

@interface SGSMMutableSearchState : NSObject {
    SGMContactOpportunityInSpotlight *_contactOpportunity;
    SGMContactResultInSpotlight *_contactResult;
    SGMContactResultSelectedInSpotlight *_contactSelected;
    SGMNoResultSelectedInSpotlight *_noneSelected;
    SGMOtherResultSelectedInSpotlight *_otherSelected;
    unsigned short _contactResultCount;
    unsigned short _contactOpportunityCount;
    unsigned char _contactConversionCount;
    unsigned char _contactLossCount;
    unsigned short _curatedOrPseudoContactOpportunityCount;
    unsigned char _otherSelectedCount;
    unsigned char _nonOpportunityCount;
    BOOL _justEngaged;
    NSMutableSet *_resultsSeen;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)commit;
- (BOOL)isFirstTimeSeeingResult:(id)a0;
- (void)resetConversionCounts;
- (void)resetCounts;
- (void)scoreAsNonOpportunity;
- (void)scoreAsOtherConversion;
- (void)scoreAsContactResult;
- (void)scoreAsContactOpportunity;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void)scoreAsContactConversion;
- (void)scoreAsContactLoss;
- (void)setJustEngaged;
- (void)resetJustEngaged;
- (BOOL)justEngaged;

@end
