@class NSMutableSet;

@interface SGSMMutableSearchState : NSObject {
    unsigned short _contactResultCount;
    unsigned short _contactOpportunityCount;
    unsigned char _contactConversionCount;
    unsigned char _contactLossCount;
    unsigned short _curatedOrPseudoContactOpportunityCount;
    unsigned char _otherSelectedCount;
    unsigned char _nonOpportunityCount;
    char _justEngaged;
    NSMutableSet *_resultsSeen;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)commit;
- (void)resetCounts;
- (char)isFirstTimeSeeingResult:(id)a0;
- (char)justEngaged;
- (void)resetConversionCounts;
- (void)resetJustEngaged;
- (void)scoreAsContactConversion;
- (void)scoreAsContactLoss;
- (void)scoreAsContactOpportunity;
- (void)scoreAsContactResult;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void)scoreAsNonOpportunity;
- (void)scoreAsOtherConversion;
- (void)setJustEngaged;

@end
