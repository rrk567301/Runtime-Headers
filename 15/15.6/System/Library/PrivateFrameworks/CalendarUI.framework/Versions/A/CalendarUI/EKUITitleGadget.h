@class CalUISuggestionsField, NSString, NSDictionary, EKEventSuggestionGenerator;

@interface EKUITitleGadget : EKUISingleViewGadget <CalUISuggestionsFieldDelegate>

@property (retain) CalUISuggestionsField *titleField;
@property char shouldConvertNewEventTitleToPlaceholder;
@property double cachedMaxHeight;
@property (retain) NSDictionary *placeholderAttributes;
@property (retain) EKEventSuggestionGenerator *eventSuggestionGenerator;
@property (readonly) CalUISuggestionsField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (char)needsExpansion;
- (char)performDragOperation:(id)a0;
- (double)preferredWidth;
- (double)maxHeight;
- (id)control;
- (id)initWithViewController:(id)a0;
- (char)_showEmptyTitle;
- (id)recurrenceDifferenceDescription;
- (char)allowConversionToReminder;
- (id)claimedPboardTypes;
- (void)editingDidEnd;
- (void)insertNewline;
- (char)isObjectEditable;
- (id)objectTitle;
- (void)queryForString:(id)a0 suggestionsFoundHandler:(id /* block */)a1;
- (unsigned long long)recurrenceDifferenceCount;
- (id)recurrenceDifferenceTitle;
- (void)resetToOriginalItem;
- (char)shouldDisplay;
- (char)shouldKeepSuggestedEventsOnTheirOriginalCalendar;
- (void)suggestionSelected:(id)a0;
- (char)timeDetectionForSuggestionsAvoidsChangingDays;
- (id)titleForSuggestion:(id)a0;
- (void)updateObject;
- (void)updateTitle:(id)a0;
- (void)updateWithChanges:(id)a0;
- (id)viewForSuggestion:(id)a0 width:(double)a1;
- (char)wantsTimeDetection;

@end
