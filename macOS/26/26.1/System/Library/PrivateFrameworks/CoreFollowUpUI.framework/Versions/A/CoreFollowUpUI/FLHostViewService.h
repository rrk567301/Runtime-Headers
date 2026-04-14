@class NSString, NSWindow;

@interface FLHostViewService : NSServiceViewController <FLExtensionViewServiceInterface> {
    NSWindow *_window;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)exportedInterface;
- (void)loadView;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;
- (void)connectToContextWithSessionID:(id)a0 withCompletion:(id /* block */)a1;

@end
