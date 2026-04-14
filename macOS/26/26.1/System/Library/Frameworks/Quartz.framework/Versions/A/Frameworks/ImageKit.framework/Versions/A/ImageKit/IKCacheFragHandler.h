@class NSString, NSMutableArray;

@interface IKCacheFragHandler : NSObject {
    unsigned long long _totalLen;
    unsigned long long _holesLen;
    id *_sizeRanks;
    NSMutableArray *_orderedByStart;
    NSString *_path;
    BOOL _isDirty;
}

- (void)clear;
- (BOOL)isDirty;
- (void)assertSpaceIsRetainedAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (BOOL)checkConsistency;
- (BOOL)canFindHoleForLen:(unsigned long long)a0;
- (BOOL)checkHolesLenConsistency;
- (id)orderedByStart;
- (id)initWithFilePath:(id)a0;
- (unsigned long long)totalLen;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (void)releaseSpaceAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (float)frag;
- (void)_removeHoleFromRanks:(id)a0;
- (id)dataToSave;
- (void)save;
- (void)_insertHoleInRanks:(id)a0;
- (void)truncateFromPosition:(unsigned long long)a0;
- (id)init;
- (unsigned long long)allocateSpaceForLen:(unsigned long long)a0 added:(BOOL *)a1;
- (void)commonInitWithDictionary:(id)a0;
- (BOOL)getLastHoleStart:(unsigned long long *)a0 len:(unsigned long long *)a1;

@end
