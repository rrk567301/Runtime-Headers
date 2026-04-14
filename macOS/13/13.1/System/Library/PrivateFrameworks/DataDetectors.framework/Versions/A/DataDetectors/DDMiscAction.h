@class NSString, NSBundle;

@interface DDMiscAction : DDMacAction {
    NSString *_controllerClassName;
    NSBundle *_bundle;
    BOOL _actionLoadedSuccessfully;
}

- (id)name;
- (void).cxx_destruct;
- (id)menuItem:(id)a0 viewAtScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)menuItem:(id)a0 previewItemAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)menuItem:(id)a0 preferredEdgeForPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithDict:(id)a0 bundle:(id)a1;
- (BOOL)displaysUI;
- (BOOL)runForResult:(struct __DDResult { } *)a0 context:(id)a1;
- (BOOL)runForTextCheckingResult:(id)a0 context:(id)a1;
- (BOOL)runForURL:(id)a0 context:(id)a1;
- (id)rawMenuItemForContext:(id)a0;
- (id)controllerClassName;
- (Class)controllerClass;
- (BOOL)_runForResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
- (BOOL)_loadActionIfNeeded;

@end
