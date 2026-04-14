@class NSArray, NSString, CUIKEventSuggestion, EKPredicateSearch, NSObject;
@protocol OS_dispatch_queue;

@interface CUIKEventSuggestionGenerator : NSObject

@property (retain) EKPredicateSearch *runningTitleSearch;
@property (retain) NSObject<OS_dispatch_queue> *queryQueue;
@property (retain) NSArray *lastSuggestions;
@property (retain) NSString *lastQueryString;
@property (retain) CUIKEventSuggestion *lastDefaultSuggestion;

+ (BOOL)scanStringForFlights:(id)a0 flightNumber:(unsigned long long *)a1 airlineCode:(id *)a2;
+ (id)firstNaturalLanguageEventWithSearchString:(id)a0 eventStore:(id)a1;
+ (id)eventWithSuggestedTimeFromString:(id)a0 referenceDate:(id)a1 inEventStore:(id)a2 options:(unsigned long long)a3;
+ (id)allNaturalLanguageEventsWithSearchString:(id)a0 eventStore:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)eventSuggestionsFromString:(id)a0 initialEvent:(id)a1 options:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)generateEventSuggestionsAsynchronouslyFromString:(id)a0 options:(unsigned long long)a1 defaultCalendar:(id)a2 referenceDate:(id)a3 initialEvent:(id)a4 handler:(id /* block */)a5;
- (id)_createPartialSuggestionWithTimeDetectionResults:(id)a0 event:(id)a1;
- (void)_completeSuggestion:(id)a0 timeDetectionResults:(id)a1 referenceDate:(id)a2 event:(id)a3 calendar:(id)a4;
- (id)createSearchWithTitleMatchingQuery:(id)a0 inEventStore:(id)a1;
- (void)eventSuggestionsFromString:(id)a0 defaultCalendar:(id)a1 referenceDate:(id)a2 options:(unsigned long long)a3 handler:(id /* block */)a4;

@end
