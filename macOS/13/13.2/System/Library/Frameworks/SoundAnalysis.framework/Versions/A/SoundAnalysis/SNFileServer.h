@class NSString, CUFileServer, RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue;

@interface SNFileServer : NSObject {
    CUFileServer *_server;
    NSObject<OS_dispatch_queue> *_queue;
    RPCompanionLinkClient *_link;
    NSString *_rootDirectory;
}

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)initWithRootDirectory:(id)a0;

@end
