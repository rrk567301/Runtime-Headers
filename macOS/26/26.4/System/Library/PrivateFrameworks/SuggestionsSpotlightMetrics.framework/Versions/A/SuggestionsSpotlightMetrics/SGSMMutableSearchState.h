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
- (void)resetConversionCounts;
- (void)resetJustEngaged;
- (void)scoreAsContactLoss;
- (BOOL)isFirstTimeSeeingResult:(id)a0;
- (BOOL)justEngaged;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void).cxx_destruct;
- (void)resetCounts;
- (void)scoreAsContactResult;
- (void)scoreAsNonOpportunity;
- (void)scoreAsOtherConversion;
- (id)init;
- (void)setJustEngaged;
- (void)scoreAsContactOpportunity;
- (void)scoreAsContactConversion;
- (id)description;

@end
