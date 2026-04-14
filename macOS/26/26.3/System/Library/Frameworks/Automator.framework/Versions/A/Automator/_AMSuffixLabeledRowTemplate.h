@class NSString, NSFormatter, NSTextField;

@interface _AMSuffixLabeledRowTemplate : NSPredicateEditorRowTemplate

@property (retain) NSTextField *labelField;
@property BOOL hasCreatedViews;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSFormatter *formatter;
@property long long multiplier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)templateViews;
- (id)convertToEvaluationPredicateFromUIPredicate:(id)a0;
- (void)createViewsIfNecessary;

@end
