@interface ABSuggestionsTracing : NSObject

+ (void)traceSuggestionAction:(id)a0 suggestionIdentifier:(id)a1 contactIdentifier:(id)a2;
+ (id)suggestionLoggingForService;
+ (void)traceSuggestionInteraction:(id)a0;
+ (void)traceContactInformationSource:(id)a0 suggestionIdentifier:(id)a1 contactIdentifier:(id)a2;
+ (void)traceSuggestionInfoInteraction:(id)a0 suggestionIdentifier:(id)a1 contactIdentifier:(id)a2;

@end
