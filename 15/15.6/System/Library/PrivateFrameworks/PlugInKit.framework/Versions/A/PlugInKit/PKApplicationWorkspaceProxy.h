@class LSApplicationWorkspace, NSString;

@interface PKApplicationWorkspaceProxy : NSObject <PKApplicationWorkspaceProxy>

@property (readonly, nonatomic) LSApplicationWorkspace *lsObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultWorkspace;

- (id)init;
- (void).cxx_destruct;
- (char)registerPlugin:(id)a0;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)installedPlugins;
- (id)pluginsMatchingQuery:(id)a0 applyFilter:(id /* block */)a1;
- (char)unregisterPlugin:(id)a0;

@end
