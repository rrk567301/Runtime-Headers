@class VUIDocumentUIConfiguration, NSVisualEffectView;

@interface VUINavigationController : VUIAppNavigationController {
    NSVisualEffectView *visualEffectFillView;
}

@property (retain, nonatomic) VUIDocumentUIConfiguration *configuration;

- (void)viewDidLayout;
- (void).cxx_destruct;

@end
