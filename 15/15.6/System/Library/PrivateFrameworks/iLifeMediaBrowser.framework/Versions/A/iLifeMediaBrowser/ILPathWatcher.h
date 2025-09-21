@interface ILPathWatcher : NSObject

+ (id)sharedPathWatcher;

- (id)init;
- (id)_init;
- (void)removeAllPaths:(id)a0;
- (char)isSavedQuery:(id)a0;
- (void)refreshAllPaths:(id)a0;
- (void)refreshPath:(id)a0 observer:(id)a1;
- (void)removePath:(id)a0 observer:(id)a1;
- (void)watchPath:(id)a0 observer:(id)a1;
- (char)watchPathIsUnique:(id)a0 observer:(id)a1;
- (void)watchQuery:(id)a0 observer:(id)a1 queryScope:(id)a2 queryRunMode:(int)a3;
- (char)watchedQueryIsUnique:(id)a0 observer:(id)a1;

@end
