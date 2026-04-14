@class NSLock, NSMutableArray, NSString;

@interface ILFolderMediaManager : ILMediaManager {
    NSMutableArray *_folderPaths;
    NSLock *_folderPathsLock;
    NSString *_currentLoadPath;
    BOOL _shouldAbortCurrentLoad;
    id _reserved4;
    id _reserved5;
    id _reserved6;
}

+ (id)sharedMediaManager;

- (id)_init;
- (void)dealloc;
- (id)init;
- (void)addFolderPaths:(id)a0;
- (void)addFolderPath:(id)a0;
- (void)removeAllFolderPaths;
- (void)removeFolderPath:(id)a0;
- (void)removeFolderPaths:(id)a0;

@end
