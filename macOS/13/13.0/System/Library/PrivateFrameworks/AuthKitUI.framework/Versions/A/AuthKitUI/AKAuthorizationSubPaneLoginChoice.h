@class AKAuthorizationPaneContext, NSArray, NSScrollView, NSNumber, NSImage, NSMutableArray, NSStackView;
@protocol AKAuthorizationSubPaneLoginChoiceDelegate;

@interface AKAuthorizationSubPaneLoginChoice : AKAuthorizationSubPane {
    NSImage *_applicationImage;
    NSImage *_appleImage;
}

@property (retain, nonatomic) NSArray *contextChoices;
@property (retain, nonatomic) NSMutableArray *cellChoices;
@property (retain, nonatomic) NSScrollView *scrollView;
@property (retain, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) AKAuthorizationPaneContext *context;
@property (retain, nonatomic) NSNumber *selectedChoice;
@property (nonatomic) unsigned long long indexOfChosenLogin;
@property (weak, nonatomic) id<AKAuthorizationSubPaneLoginChoiceDelegate> delegate;

+ (id)_createScrollView;
+ (id)_createStackView;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)loginChoiceSelected:(id)a0;
- (void)addToStackView:(id)a0 context:(id)a1;
- (void)addToConstraints:(id)a0 context:(id)a1;
- (id)appleImage;
- (id)applicationImage;
- (void)setApplicationImage:(id)a0;
- (id)_imageForLoginChoice:(id)a0;
- (void)addLoginChoices:(id)a0 withImage:(id)a1;
- (id)getImageNamed:(id)a0 inBundle:(id)a1;

@end
