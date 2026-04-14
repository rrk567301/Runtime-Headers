@class NSString, NSMutableArray;

@interface IKCacheFragHandler : NSObject {
    unsigned long long _totalLen;
    unsigned long long _holesLen;
    id *_sizeRanks;
    NSMutableArray *_orderedByStart;
    NSString *_path;
    BOOL _isDirty;
}

- (void)save;
- (id)orderedByStart;
- (void)clear;
- (BOOL)canFindHoleForLen:(unsigned long long)a0;
- (float)frag;
- (BOOL)checkHolesLenConsistency;
- (id)initWithFilePath:(id)a0;
- (id)init;
- (void)truncateFromPosition:(unsigned long long)a0;
- (void)_insertHoleInRanks:(id)a0;
- (void)assertSpaceIsRetainedAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (id)dataToSave;
- (BOOL)checkConsistency;
- (void)_removeHoleFromRanks:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (unsigned long long)totalLen;
- (void)releaseSpaceAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (BOOL)isDirty;
- (unsigned long long)allocateSpaceForLen:(unsigned long long)a0 added:(BOOL *)a1;
- (void)commonInitWithDictionary:(id)a0;
- (BOOL)getLastHoleStart:(unsigned long long *)a0 len:(unsigned long long *)a1;

@end
