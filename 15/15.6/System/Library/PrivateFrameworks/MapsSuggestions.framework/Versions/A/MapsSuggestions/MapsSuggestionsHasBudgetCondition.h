@class MapsSuggestionsBudget;

@interface MapsSuggestionsHasBudgetCondition : MapsSuggestionsBaseCondition {
    MapsSuggestionsBudget *_budget;
}

- (void).cxx_destruct;
- (char)isTrue;
- (id)initWithBudget:(id)a0;

@end
