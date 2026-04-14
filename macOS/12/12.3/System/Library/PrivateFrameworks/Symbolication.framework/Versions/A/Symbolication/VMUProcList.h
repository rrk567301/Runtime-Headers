@class NSLock, NSMutableDictionary;

@interface VMUProcList : NSObject {
    NSLock *procLock;
    NSMutableDictionary *allProcs;
    NSMutableDictionary *filteredProcs;
}

- (id)init;
- (unsigned long long)count;
- (void).cxx_destruct;
- (BOOL)update;
- (id)allNames;
- (BOOL)updateFromSystem;
- (void)_populateFromSystem;
- (id)newestProcInfoWithName:(id)a0;
- (void)setProcInfos:(id)a0;
- (void)addProcInfo:(id)a0;
- (void)removeProcInfo:(id)a0;
- (id)allProcInfos;
- (id)allPIDs;
- (id)allPathNames;
- (id)newestProcInfo;
- (id)procInfoWithPID:(int)a0;

@end
