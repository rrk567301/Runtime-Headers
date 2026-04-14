@class LSApplicationWorkspace, NSString;

@interface PKApplicationWorkspaceProxy : NSObject <PKApplicationWorkspaceProxy>

@property (readonly, nonatomic) LSApplicationWorkspace *lsObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultWorkspace;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (BOOL)registerPlugin:(id)a0;
- (id)installedPlugins;
- (id)pluginsMatchingQuery:(id)a0 applyFilter:(id /* block */)a1;
- (BOOL)unregisterPlugin:(id)a0;

@end
