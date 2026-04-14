@class CalUISuggestionsField, NSString, NSDictionary, EKEventSuggestionGenerator;

@interface EKUITitleGadget : EKUISingleViewGadget <CalUISuggestionsFieldDelegate>

@property (retain) CalUISuggestionsField *titleField;
@property BOOL shouldConvertNewEventTitleToPlaceholder;
@property double cachedMaxHeight;
@property (retain) NSDictionary *placeholderAttributes;
@property (retain) EKEventSuggestionGenerator *eventSuggestionGenerator;
@property (readonly) CalUISuggestionsField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void)controlTextDidChange:(id)a0;
- (void)setObject:(id)a0;
- (double)preferredWidth;
- (void)insertNewline;
- (id)initWithViewController:(id)a0;
- (double)maxHeight;
- (void).cxx_destruct;
- (id)iconSymbolName;
- (BOOL)needsExpansion;
- (BOOL)performDragOperation:(id)a0;
- (id)control;
- (id)parentContainer;
- (BOOL)_showEmptyTitle;
- (id)eventVC;
- (id)recurrenceDifferenceDescription;
- (void)setEditingMode:(BOOL)a0;
- (double)horizontalInset;
- (BOOL)allowConversionToReminder;
- (id)claimedPboardTypes;
- (void)editingDidEnd;
- (BOOL)isObjectEditable;
- (id)objectTitle;
- (void)queryForString:(id)a0 suggestionsFoundHandler:(id /* block */)a1;
- (unsigned long long)recurrenceDifferenceCount;
- (id)recurrenceDifferenceTitle;
- (void)resetToOriginalItem;
- (void)selectTitleWithTrailingCursor:(BOOL)a0;
- (BOOL)shouldDisplay;
- (BOOL)shouldKeepSuggestedEventsOnTheirOriginalCalendar;
- (void)suggestionSelected:(id)a0;
- (void)textFieldBecomeFirstResponder;
- (BOOL)timeDetectionForSuggestionsAvoidsChangingDays;
- (id)titleForSuggestion:(id)a0;
- (void)updateObject;
- (void)updateTitle:(id)a0;
- (void)updateWithChanges:(id)a0;
- (id)viewForSuggestion:(id)a0 width:(double)a1;
- (BOOL)wantsTimeDetection;

@end
