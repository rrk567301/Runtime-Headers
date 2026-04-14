@interface MUIHighlightedMessagesViewControllerFactory : NSObject

+ (id)createViewControllerForMessages:(id)a0 cellLayoutValues:(id)a1 contactStore:(id)a2 delegate:(id)a3;
+ (void)hideBelowLineMessagesForViewController:(id)a0;
+ (void)refreshFontsForViewController:(id)a0;
+ (void)resetSelectionForViewController:(id)a0;
+ (void)updateContainerInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0 forViewController:(id)a1;
+ (void)updateMessages:(id)a0 forViewController:(id)a1;

- (id)init;

@end
