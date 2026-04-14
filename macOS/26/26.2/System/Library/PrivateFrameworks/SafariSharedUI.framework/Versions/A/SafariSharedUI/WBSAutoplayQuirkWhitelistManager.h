@class WBSRemotelyUpdatableDataController;

@interface WBSAutoplayQuirkWhitelistManager : NSObject {
    WBSRemotelyUpdatableDataController *_remotelyUpdatableDataController;
}

- (void)prepareForTermination;
- (void).cxx_destruct;
- (id)init;
- (void)quirksForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithBuiltInWhitelistURL:(id)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5;

@end
