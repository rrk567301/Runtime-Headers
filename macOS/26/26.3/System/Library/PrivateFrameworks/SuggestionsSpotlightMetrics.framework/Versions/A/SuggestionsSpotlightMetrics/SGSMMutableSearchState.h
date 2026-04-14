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
- (void)resetCounts;
- (void)scoreAsContactOpportunity;
- (void)scoreAsContactResult;
- (void)setJustEngaged;
- (id)description;
- (id)init;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void)resetConversionCounts;
- (void)scoreAsOtherConversion;
- (BOOL)isFirstTimeSeeingResult:(id)a0;
- (void).cxx_destruct;
- (void)scoreAsContactLoss;
- (void)scoreAsContactConversion;
- (void)resetJustEngaged;
- (void)scoreAsNonOpportunity;

@end
