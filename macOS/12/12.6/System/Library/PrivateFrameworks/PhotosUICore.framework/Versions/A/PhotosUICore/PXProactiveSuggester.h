@interface PXProactiveSuggester : NSObject

+ (void)updateProactiveSuggestionsFromTimelineEntries:(id)a0 forTimelineSize:(unsigned long long)a1;
+ (id)proactiveCriterionForMemory:(id)a0;
+ (id)proactiveCriterionForFeaturedPhoto:(id)a0;

@end
