@class NSString, NSMutableArray;

@interface IKCacheFragHandler : NSObject {
    unsigned long long _totalLen;
    unsigned long long _holesLen;
    id *_sizeRanks;
    NSMutableArray *_orderedByStart;
    NSString *_path;
    BOOL _isDirty;
}

- (BOOL)checkConsistency;
- (BOOL)isDirty;
- (void)save;
- (void)releaseSpaceAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (BOOL)checkHolesLenConsistency;
- (void)clear;
- (float)frag;
- (id)dataToSave;
- (id)initWithDictionary:(id)a0;
- (BOOL)canFindHoleForLen:(unsigned long long)a0;
- (void)_removeHoleFromRanks:(id)a0;
- (void)truncateFromPosition:(unsigned long long)a0;
- (id)init;
- (id)initWithFilePath:(id)a0;
- (void)assertSpaceIsRetainedAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (unsigned long long)totalLen;
- (void)_insertHoleInRanks:(id)a0;
- (id)orderedByStart;
- (void)dealloc;
- (unsigned long long)allocateSpaceForLen:(unsigned long long)a0 added:(BOOL *)a1;
- (void)commonInitWithDictionary:(id)a0;
- (BOOL)getLastHoleStart:(unsigned long long *)a0 len:(unsigned long long *)a1;

@end
