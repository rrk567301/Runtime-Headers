@class WFWidgetConfigurationCardView, WFWidgetConfigurationRemoteViewController, NSString, WFWidgetConfigurationRequest, NSExtension, WFWidgetConfigurationView;
@protocol WFWidgetConfigurationViewControllerDelegate, NSCopying;

@interface WFWidgetConfigurationViewController : NSViewController <WFWidgetConfigurationCardViewDelegate, WFWidgetConfigurationRemoteViewControllerDelegate>

@property (readonly, weak, nonatomic) WFWidgetConfigurationCardView *cardView;
@property (readonly, nonatomic) WFWidgetConfigurationRequest *request;
@property (readonly, nonatomic) WFWidgetConfigurationRemoteViewController *remoteViewController;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id<NSCopying> extensionRequest;
@property (nonatomic) struct CGSize { double width; double height; } preferredCardSize;
@property (readonly, nonatomic) WFWidgetConfigurationView *configurationView;
@property (weak, nonatomic) id<WFWidgetConfigurationViewControllerDelegate> delegate;
@property struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)preferredContentSizeDidChangeForViewController:(id)a0;
- (id)initWithRequest:(id)a0;
- (void)widgetConfigurationRemoteViewController:(id)a0 didReceiveConfiguredIntent:(id)a1;
- (void)widgetConfigurationCardViewDidRequestToClose:(id)a0;
- (void)showErrorMessage;
- (void)loadWidgetConfigurationRemoteViewController;
- (void)setRemoteViewController:(id)a0 extension:(id)a1 extensionRequest:(id)a2;
- (void)installRemoteViewController:(id)a0;
- (void)finishWithCurrentConfiguration;

@end
