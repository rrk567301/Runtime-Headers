@class NSNumber, NSDate;

@interface WBSFrequentlyVistedSiteAnalyticsPayload : NSObject {
    unsigned long long _itemPosition;
    NSDate *_lastVisitedDate;
    NSNumber *_score;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)eventDictionaryDescription;
- (id)initWithItemPosition:(unsigned long long)a0 lastVisitedDate:(id)a1 score:(id)a2;

@end
