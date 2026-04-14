@class NSTableView, NSLayoutConstraintExplainer, NSTextField;

@interface ExplainerPane : NSView

@property (weak, nonatomic) NSTextField *explainerLabel;
@property (weak, nonatomic) NSTextField *explainerDetailsLabel;
@property (weak, nonatomic) NSTableView *explainerConstraintTable;
@property (retain, nonatomic) NSLayoutConstraintExplainer *explainer;

- (void)didChangeValueForKey:(id)a0;
- (void).cxx_destruct;

@end
