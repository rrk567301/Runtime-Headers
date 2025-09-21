@class NSString, NSBundle;

@interface DDMiscAction : DDMacAction {
    NSString *_controllerClassName;
    NSBundle *_bundle;
    char _actionLoadedSuccessfully;
}

- (id)name;
- (void).cxx_destruct;
- (unsigned long long)menuItem:(id)a0 preferredEdgeForPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)menuItem:(id)a0 previewItemAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)menuItem:(id)a0 viewAtScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (Class)controllerClass;
- (char)_loadActionIfNeeded;
- (char)_runForResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
- (id)controllerClassName;
- (char)displaysUI;
- (id)initWithDict:(id)a0 bundle:(id)a1;
- (id)rawMenuItemForContext:(id)a0;
- (char)runForResult:(struct __DDResult { } *)a0 context:(id)a1;
- (char)runForTextCheckingResult:(id)a0 context:(id)a1;
- (char)runForURL:(id)a0 context:(id)a1;

@end
