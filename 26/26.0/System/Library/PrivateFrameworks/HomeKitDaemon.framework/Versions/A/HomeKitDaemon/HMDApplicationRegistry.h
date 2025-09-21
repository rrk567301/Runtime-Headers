@class NSArray, NSString, NSMutableSet, LSApplicationWorkspace;

@interface HMDApplicationRegistry : HMFObject <HMFLogging, LSApplicationWorkspaceObserverProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_applications;
    LSApplicationWorkspace *_workspace;
}

@property (readonly, copy) NSArray *applications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedRegistry;

- (void)applicationsDidUninstall:(id)a0;
- (void)dealloc;
- (id)applicationInfoForBundleIdentifier:(id)a0;
- (id)init;
- (void)applicationsDidInstall:(id)a0;
- (id)applicationInfoForBundleURL:(id)a0;
- (void).cxx_destruct;

@end
