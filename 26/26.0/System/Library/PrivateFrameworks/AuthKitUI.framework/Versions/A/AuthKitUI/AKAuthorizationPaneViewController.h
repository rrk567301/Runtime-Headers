@class NSStackView, NSString, NSLayoutConstraint, NSMutableArray, AKAuthorizationPaneContext;
@protocol AKAuthorizationEditableDataSources, AKAuthorizationPaneDelegate;

@interface AKAuthorizationPaneViewController : NSViewController <AKAuthorizationPaneAutomaticResizeDelegate>

@property (readonly, nonatomic) NSLayoutConstraint *headerWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *footerWidthConstraint;
@property (retain, nonatomic) AKAuthorizationPaneContext *headerPaneContext;
@property (retain, nonatomic) AKAuthorizationPaneContext *footerPaneContext;
@property (retain, nonatomic) NSMutableArray *mutableConstraints;
@property (weak, nonatomic) id<AKAuthorizationPaneDelegate> paneDelegate;
@property (weak, nonatomic) id<AKAuthorizationEditableDataSources> editableDataSources;
@property (readonly, nonatomic) NSStackView *paneHeaderStackView;
@property (readonly, nonatomic) NSStackView *paneFooterStackView;
@property (readonly, nonatomic) BOOL isWristDetectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_newContainerView;
- (id)_newStackView;
- (void)_setupContexts;
- (void)beginAutomaticResizeDisabled;
- (void)endAutomaticResizeDisabled;
- (BOOL)isAutomaticResizeDisabled;
- (void)setAutomaticResizeDelay:(double)a0;

@end
