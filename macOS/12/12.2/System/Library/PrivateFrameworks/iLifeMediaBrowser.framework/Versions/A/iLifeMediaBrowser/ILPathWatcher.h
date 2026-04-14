@interface ILPathWatcher : NSObject

+ (id)sharedPathWatcher;

- (id)init;
- (id)_init;
- (BOOL)isSavedQuery:(id)a0;
- (BOOL)watchPathIsUnique:(id)a0 observer:(id)a1;
- (void)watchQuery:(id)a0 observer:(id)a1 queryScope:(id)a2 queryRunMode:(int)a3;
- (BOOL)watchedQueryIsUnique:(id)a0 observer:(id)a1;
- (void)removeAllPaths:(id)a0;
- (void)watchPath:(id)a0 observer:(id)a1;
- (void)removePath:(id)a0 observer:(id)a1;
- (void)refreshPath:(id)a0 observer:(id)a1;
- (void)refreshAllPaths:(id)a0;

@end
