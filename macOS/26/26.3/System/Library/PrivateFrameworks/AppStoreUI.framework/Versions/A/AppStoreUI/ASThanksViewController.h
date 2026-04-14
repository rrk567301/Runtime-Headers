@class ASWriteReviewThanksView, ASWriteReviewConfiguration;

@interface ASThanksViewController : NSViewController

@property (retain, nonatomic) ASWriteReviewConfiguration *configuration;
@property (readonly, nonatomic) ASWriteReviewThanksView *thanksView;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (struct CGSize { double x0; double x1; })preferredSizeForConfiguration:(id)a0;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)configureDialogView:(id)a0;

@end
