@protocol LAUIDelegate;

@interface LAUIAuthenticationViewControllerUIDelegate : NSObject <LAUIDelegate> {
    id<LAUIDelegate> _viewController;
}

- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;

@end
