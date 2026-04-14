@class NSArray, NSDatePicker, NSPopUpButton;

@interface AMSpecificDateRowTemplate : NSPredicateEditorRowTemplate

@property (retain) NSPopUpButton *datePopUpButton;
@property (retain) NSDatePicker *datePicker;
@property BOOL hasCreatedViews;
@property (readonly) NSArray *matchingLeftExpressions;

- (void).cxx_destruct;
- (void)setPredicate:(id)a0;
- (id)templateViews;
- (id)predicateWithSubpredicates:(id)a0;
- (double)matchForPredicate:(id)a0;
- (void)createViewsIfNecessary;

@end
