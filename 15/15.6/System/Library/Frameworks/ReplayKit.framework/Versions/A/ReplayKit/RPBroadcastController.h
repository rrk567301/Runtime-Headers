@class NSDictionary, NSURL, NSString;
@protocol RPBroadcastControllerDelegate;

@interface RPBroadcastController : NSObject

@property (retain, nonatomic) NSDictionary *serviceInfo;
@property (retain, nonatomic) NSURL *broadcastURL;
@property (retain, nonatomic) NSString *broadcastExtensionBundleIdentifier;
@property (readonly, nonatomic, getter=isBroadcasting) char broadcasting;
@property (readonly, nonatomic, getter=isPaused) char paused;
@property (weak, nonatomic) id<RPBroadcastControllerDelegate> delegate;
@property (readonly, nonatomic) NSString *broadcastExtensionBundleID;

- (id)init;
- (void).cxx_destruct;
- (void)resumeBroadcast;
- (void)finishBroadcastWithHandler:(id /* block */)a0;
- (id)initWithCurrentSession;
- (id)initWithExtensionBundleID:(id)a0 broadcastURL:(id)a1;
- (void)pauseBroadcast;
- (void)startBroadcastWithHandler:(id /* block */)a0;

@end
