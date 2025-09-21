@interface DDBubbleAction : DDMacAction

- (char)displaysUI;
- (id)initWithDict:(id)a0 bundle:(id)a1;
- (id)menuItemForResult:(struct __DDResult { } *)a0 textCheckingResult:(id)a1 URL:(id)a2 uiReady:(char)a3 context:(id)a4 actionTarget:(id)a5;
- (char)runForResult:(struct __DDResult { } *)a0 context:(id)a1;
- (char)runForResult:(struct __DDResult { } *)a0 textCheckingResult:(id)a1 URL:(id)a2 context:(id)a3;
- (char)runForTextCheckingResult:(id)a0 context:(id)a1;
- (char)runForURL:(id)a0 context:(id)a1;

@end
