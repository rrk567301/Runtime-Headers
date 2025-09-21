@class NSString, _PASTuple2, NSDate;

@interface PSGStructuredInfoSuggestionCache : NSObject {
    _PASTuple2 *_cachedSuggestions;
    NSString *_localeIdentifier;
    NSDate *_startTime;
    double _ttlSeconds;
}

+ (id)sharedInstance;
+ (char)_matchesPredictedValue:(id)a0 prefixValue:(id)a1;
+ (id)emptySuggestionsPlaceholder;

- (void).cxx_destruct;
- (void)invalidate;
- (char)_isCacheEmpty;
- (char)_maybeClearCache;
- (void)addEmptyPlaceholderForTrigger:(id)a0 localeIdentifier:(id)a1;
- (void)addStructuredInfoSuggestions:(id)a0 localeIdentifier:(id)a1;
- (id)initWithTTLSeconds:(double)a0;
- (id)searchWithContext:(id)a0 localeIdentifier:(id)a1 maxSuggestions:(unsigned long long)a2;
- (id)searchWithTrigger:(id)a0 localeIdentifier:(id)a1 maxSuggestions:(unsigned long long)a2;

@end
