@class NSWindow;

@interface ACUISAppAccountSetupController : NSObject

@property (nonatomic, retain) NSWindow *sheet;

- (id)init;
- (void).cxx_destruct;
- (void)startSetupInWindow:(id)a0 forDataclass:(id)a1 completion:(id /* block */)a2;

@end
