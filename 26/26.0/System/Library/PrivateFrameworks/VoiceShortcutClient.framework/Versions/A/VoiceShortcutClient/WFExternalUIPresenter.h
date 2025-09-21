@protocol WFExternalUIPresenterConnection;

@interface WFExternalUIPresenter : NSObject

@property (readonly, nonatomic) id<WFExternalUIPresenterConnection> connection;
@property (nonatomic) BOOL connected;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)willBeginExecutingShortcutStep:(id)a0;
- (void)didFinishActionWithIdentifier:(id)a0;
- (void)didStartActionWithIdentifier:(id)a0;
- (void)performDialogRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performSiriRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)willBeginExecutingShortcutWithActionCount:(id)a0;

@end
