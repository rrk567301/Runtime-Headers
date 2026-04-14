@class NSArray, NSDatePicker, NSPopUpButton;

@interface AMSpecificDateRowTemplate : NSPredicateEditorRowTemplate

@property (retain) NSPopUpButton *datePopUpButton;
@property (retain) NSDatePicker *datePicker;
@property BOOL hasCreatedViews;
@property (readonly) NSArray *matchingLeftExpressions;

- (void)setPredicate:(id)a0;
- (void).cxx_destruct;
- (double)matchForPredicate:(id)a0;
- (id)predicateWithSubpredicates:(id)a0;
- (id)templateViews;
- (void)createViewsIfNecessary;

@end
