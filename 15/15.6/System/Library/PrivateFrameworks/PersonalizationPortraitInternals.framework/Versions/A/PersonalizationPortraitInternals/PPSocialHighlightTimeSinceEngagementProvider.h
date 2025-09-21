@class NSMutableDictionary;

@interface PPSocialHighlightTimeSinceEngagementProvider : NSObject <PPSocialHighlightFeatureProvider> {
    NSMutableDictionary *_dates;
    id /* block */ _keyBlock;
    id /* block */ _groupByBlock;
    unsigned long long _feedbackType;
    char _mostRecent;
}

- (void).cxx_destruct;
- (id)applyFeedback:(id)a0;
- (id)initWithFeedbackType:(unsigned long long)a0 feedbackGroupByBlock:(id /* block */)a1 highlightKeyBlock:(id /* block */)a2 mostRecent:(char)a3 highlights:(id)a4;
- (id)valueForHighlight:(id)a0;

@end
