@class PPScoredItem;

@interface PPCoalescedScoredNamedEntity : NSObject {
    unsigned short _occurrencesInSource;
    PPScoredItem *_scoredNamedEntity;
}

- (id)init;
- (void).cxx_destruct;

@end
