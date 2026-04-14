@class NSView, NSViewController;

@interface AKAuthorizationSubPane : NSObject <AKAuthorizationSubPaneAdding>

@property (readonly, nonatomic) NSView *internalView;
@property (nonatomic) double internalCustomSpacingAfter;
@property (readonly, nonatomic) NSViewController *viewController;
@property (readonly, nonatomic) NSView *view;
@property (nonatomic) double customSpacingAfter;

- (id)initWithView:(id)a0;
- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)addToConstraints:(id)a0 context:(id)a1;
- (void)addToStackView:(id)a0 context:(id)a1;

@end
