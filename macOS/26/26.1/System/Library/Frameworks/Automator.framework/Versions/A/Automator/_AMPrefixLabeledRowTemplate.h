@class NSString, NSFormatter, NSPopUpButton;

@interface _AMPrefixLabeledRowTemplate : NSPredicateEditorRowTemplate

@property (retain) NSPopUpButton *labelPopupButton;
@property BOOL hasCreatedViews;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSFormatter *formatter;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)templateViews;
- (void)createViewsIfNecessary;

@end
