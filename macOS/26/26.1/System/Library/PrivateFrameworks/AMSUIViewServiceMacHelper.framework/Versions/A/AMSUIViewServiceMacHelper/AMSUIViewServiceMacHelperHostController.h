@class NSString, NSWindow;
@protocol AMSUIViewServiceWindowProvider;

@interface AMSUIViewServiceMacHelperHostController : NSViewController <AMSUIViewServiceMacHelper>

@property (weak) NSWindow *presentingWindow;
@property (weak) id<AMSUIViewServiceWindowProvider> windowProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
