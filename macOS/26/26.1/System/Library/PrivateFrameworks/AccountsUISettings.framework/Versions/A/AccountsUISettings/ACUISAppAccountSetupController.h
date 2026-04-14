@class NSWindow;

@interface ACUISAppAccountSetupController : NSObject

@property (nonatomic, retain) NSWindow *sheet;

- (void).cxx_destruct;
- (id)init;
- (void)startSetupInWindow:(id)a0 forDataclass:(id)a1 completion:(id /* block */)a2;

@end
