@interface ABPersonListControllerTracing : NSObject

+ (char)shouldShowSiriSuggestions;
+ (id)suggestionLoggingForService;
+ (void)traceDidSelectSuggestion:(char)a0 suggestedRecordId:(id)a1 contactId:(id)a2;
+ (void)traceSearchDidComplete:(char)a0;

@end
