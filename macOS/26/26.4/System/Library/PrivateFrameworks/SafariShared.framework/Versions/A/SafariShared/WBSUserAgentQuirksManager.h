@class WBSRemotelyUpdatableDataController;

@interface WBSUserAgentQuirksManager : NSObject {
    WBSRemotelyUpdatableDataController *_remotelyUpdatableDataController;
}

- (void).cxx_destruct;
- (id)init;
- (void)prepareForTermination;
- (void)getQuirksForURLString:(id)a0 withDefaultUserAgent:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithBuiltInQuirkListURL:(id)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5;

@end
