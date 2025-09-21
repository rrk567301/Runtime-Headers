@class ASCPendingPromises;
@protocol ASCServices;

@interface ASCUtilities : NSObject

@property (class, readonly) ASCUtilities *shared;

@property (readonly, nonatomic) id<ASCServices> connection;
@property (readonly, nonatomic) ASCPendingPromises *pendingPromises;

+ (void)withSharedUtilities:(id)a0 perform:(id /* block */)a1;

- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)openURL:(id)a0;
- (id)restoreAppStore;
- (void)daemonConnectionWasLost:(id)a0;

@end
