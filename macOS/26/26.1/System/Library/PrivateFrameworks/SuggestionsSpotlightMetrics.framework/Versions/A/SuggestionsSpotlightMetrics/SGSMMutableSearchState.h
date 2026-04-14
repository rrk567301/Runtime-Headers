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

- (void)resetCounts;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void)resetConversionCounts;
- (void)scoreAsContactResult;
- (void)scoreAsOtherConversion;
- (BOOL)justEngaged;
- (void)commit;
- (void)scoreAsContactOpportunity;
- (void)resetJustEngaged;
- (id)description;
- (BOOL)isFirstTimeSeeingResult:(id)a0;
- (void)scoreAsContactLoss;
- (void).cxx_destruct;
- (void)scoreAsContactConversion;
- (void)scoreAsNonOpportunity;
- (void)setJustEngaged;
- (id)init;

@end
