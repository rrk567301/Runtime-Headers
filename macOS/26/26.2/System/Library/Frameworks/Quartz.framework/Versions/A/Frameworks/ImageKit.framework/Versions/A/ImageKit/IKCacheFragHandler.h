@class NSString, NSMutableArray;

@interface IKCacheFragHandler : NSObject {
    unsigned long long _totalLen;
    unsigned long long _holesLen;
    id *_sizeRanks;
    NSMutableArray *_orderedByStart;
    NSString *_path;
    BOOL _isDirty;
}

- (float)frag;
- (id)initWithFilePath:(id)a0;
- (void)clear;
- (void)save;
- (id)orderedByStart;
- (BOOL)isDirty;
- (unsigned long long)totalLen;
- (BOOL)checkHolesLenConsistency;
- (BOOL)checkConsistency;
- (BOOL)canFindHoleForLen:(unsigned long long)a0;
- (void)releaseSpaceAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (id)dataToSave;
- (void)truncateFromPosition:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (void)assertSpaceIsRetainedAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (id)init;
- (void)_insertHoleInRanks:(id)a0;
- (void)_removeHoleFromRanks:(id)a0;
- (void)dealloc;
- (unsigned long long)allocateSpaceForLen:(unsigned long long)a0 added:(BOOL *)a1;
- (void)commonInitWithDictionary:(id)a0;
- (BOOL)getLastHoleStart:(unsigned long long *)a0 len:(unsigned long long *)a1;

@end
