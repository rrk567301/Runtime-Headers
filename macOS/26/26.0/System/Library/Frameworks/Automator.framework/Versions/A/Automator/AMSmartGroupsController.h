@class NSView, AMSmartGroup, NSPopUpButton, AMSmartGroupsPredicateViewController;

@interface AMSmartGroupsController : NSWindowController

@property (retain, nonatomic) AMSmartGroup *tempSmartGroup;
@property (retain, nonatomic) AMSmartGroupsPredicateViewController *_predicateViewController;
@property (weak) NSPopUpButton *orderedByPopup;
@property (weak) NSView *_predicateEditorSuperView;
@property (retain, nonatomic) AMSmartGroup *smartGroup;
@property BOOL predicateEditorEnabled;

- (id)windowNibName;
- (void)cancel:(id)a0;
- (void).cxx_destruct;
- (void)ok:(id)a0;
- (void)awakeFromNib;
- (void)prepareToShowGroup;

@end
