@class NSTextField, NSArray, NSLayoutConstraint, NSStackView;
@protocol TitleAndStackViewControllerDelegate;

@interface TitleAndStackViewController : NSViewController

@property (weak, nonatomic) NSTextField *titleTextField;
@property (copy, nonatomic) NSArray *elements;
@property (weak, nonatomic) id<TitleAndStackViewControllerDelegate> delegate;
@property (readonly, nonatomic) double minimumWidth;
@property (readonly, nonatomic) double maximumWidth;
@property (weak, nonatomic) NSStackView *stackView;
@property (weak, nonatomic) NSLayoutConstraint *stackViewBottomConstraint;

- (void)updateView;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (id)initWithMinimumWidth:(double)a0 maximumWidth:(double)a1;

@end
