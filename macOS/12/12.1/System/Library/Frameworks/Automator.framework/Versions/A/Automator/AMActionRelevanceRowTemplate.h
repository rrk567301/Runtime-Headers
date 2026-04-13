@class NSPopUpButton;

@interface AMActionRelevanceRowTemplate : NSPredicateEditorRowTemplate

@property (retain) NSPopUpButton *leftExpressionPopup;
@property (retain) NSPopUpButton *operatorPopup;
@property (retain) NSPopUpButton *rightExpressionPopup;
@property BOOL hasCreatedViews;

- (void).cxx_destruct;
- (void)setPredicate:(id)a0;
- (id)templateViews;
- (double)matchForPredicate:(id)a0;
- (id)predicateWithSubpredicates:(id)a0;
- (void)createViewsIfNecessary;

@end
