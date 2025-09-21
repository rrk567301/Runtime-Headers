@class NSMutableSet;

@interface SGSMMutableSearchState : NSObject {
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

- (void)commit;
- (void)scoreAsOtherConversion;
- (void)setJustEngaged;
- (void)scoreAsContactLoss;
- (void)scoreAsContactResult;
- (BOOL)justEngaged;
- (id)init;
- (id)description;
- (void)scoreAsContactConversion;
- (void)resetJustEngaged;
- (void)scoreAsNonOpportunity;
- (void)resetConversionCounts;
- (void)scoreAsContactOpportunity;
- (void)resetCounts;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void).cxx_destruct;
- (BOOL)isFirstTimeSeeingResult:(id)a0;

@end
