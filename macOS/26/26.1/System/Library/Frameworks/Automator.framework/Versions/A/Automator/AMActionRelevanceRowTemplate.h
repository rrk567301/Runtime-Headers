@class NSPopUpButton;

@interface AMActionRelevanceRowTemplate : NSPredicateEditorRowTemplate

@property (retain) NSPopUpButton *leftExpressionPopup;
@property (retain) NSPopUpButton *operatorPopup;
@property (retain) NSPopUpButton *rightExpressionPopup;
@property BOOL hasCreatedViews;

- (void)setPredicate:(id)a0;
- (void).cxx_destruct;
- (double)matchForPredicate:(id)a0;
- (id)predicateWithSubpredicates:(id)a0;
- (id)templateViews;
- (void)createViewsIfNecessary;

@end
