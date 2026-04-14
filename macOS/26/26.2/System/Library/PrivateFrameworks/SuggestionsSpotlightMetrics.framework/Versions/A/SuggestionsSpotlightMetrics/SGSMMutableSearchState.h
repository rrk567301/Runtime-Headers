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
- (BOOL)justEngaged;
- (void)resetConversionCounts;
- (void)resetJustEngaged;
- (void)scoreAsNonOpportunity;
- (void).cxx_destruct;
- (void)scoreAsOtherConversion;
- (void)scoreAsContactOpportunity;
- (id)description;
- (void)scoreAsContactConversion;
- (void)setJustEngaged;
- (BOOL)isFirstTimeSeeingResult:(id)a0;
- (void)resetCounts;
- (id)init;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void)scoreAsContactResult;
- (void)scoreAsContactLoss;

@end
