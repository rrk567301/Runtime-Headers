@class NSTextField, CKContextResponse, NSString, NSProgressIndicator, NSURL, NSStackView, NSLayoutConstraint, NSButton, NSMapTable;

@interface ContextFeedbackViewController : NSViewController {
    NSString *_pageTitle;
    NSURL *_url;
    BOOL _isReaderAvailable;
    NSMapTable *_topicsToGrades;
    NSMapTable *_categoriesToGrades;
    NSMapTable *_windowCategoriesToGrades;
}

@property (weak, nonatomic) NSTextField *instructionLabel;
@property (weak, nonatomic) NSStackView *stackView;
@property (weak, nonatomic) NSTextField *instructionLabelForCategories;
@property (weak, nonatomic) NSStackView *categoryStackView;
@property (retain, nonatomic) NSTextField *instructionLabelForTabGroupCategories;
@property (retain, nonatomic) NSStackView *tabGroupCategoryStackView;
@property (weak, nonatomic) NSLayoutConstraint *stackToShareURL;
@property (weak, nonatomic) NSTextField *commentField;
@property (weak, nonatomic) NSButton *shareURLSwitch;
@property (weak, nonatomic) NSButton *sendFeedbackButton;
@property (weak, nonatomic) NSProgressIndicator *progressIndicator;
@property (retain, nonatomic) CKContextResponse *pageResponse;
@property (retain, nonatomic) CKContextResponse *windowResponse;
@property (copy, nonatomic) id /* block */ didSendFeedbackHandler;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)viewDidLoad;
- (void)_didSelectGradeForTopic:(id)a0;
- (void)_didSelectGradeForCategory:(id)a0;
- (void)_didSelectGradeForTabGroupName:(id)a0;
- (id)initWithPageResponse:(id)a0 pageTitle:(id)a1 URL:(id)a2 isReaderAvailable:(BOOL)a3;
- (void)_populateStackViewWithTopicsFromCurrentResponses;
- (void)_saveGradeFromLevelIndicator:(id)a0 forResult:(id)a1 toMapTable:(id)a2;
- (void)sendFeedback:(id)a0;

@end
