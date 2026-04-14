@class ASCPendingPromises;
@protocol ASCServices;

@interface ASCURLLauncher : NSObject

@property (class, readonly) ASCURLLauncher *sharedLauncher;

@property (readonly, nonatomic) id<ASCServices> connection;
@property (readonly, nonatomic) ASCPendingPromises *pendingPromises;

+ (void)withSharedLauncher:(id)a0 perform:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)openURL:(id)a0;
- (void)daemonConnectionWasLost:(id)a0;

@end
