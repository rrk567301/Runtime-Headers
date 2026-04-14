@class NSURL;

@interface DDMapLinkController : NSObject <DDMiscActionProtocol> {
    NSURL *_mapURL;
}

+ (id)runActionWithResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
+ (BOOL)displaysNonModalUI;
+ (BOOL)requiresService;
+ (BOOL)requiresViewBridge;
+ (id)localizedDynamicName;

- (void).cxx_destruct;
- (void)runForItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithResult:(struct __DDResult { } *)a0 context:(id)a1;
- (id)initWithTextCheckingResult:(id)a0 context:(id)a1;

@end
