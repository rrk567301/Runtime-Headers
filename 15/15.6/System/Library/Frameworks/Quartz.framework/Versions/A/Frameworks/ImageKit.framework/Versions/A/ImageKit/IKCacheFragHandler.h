@class NSString, NSMutableArray;

@interface IKCacheFragHandler : NSObject {
    unsigned long long _totalLen;
    unsigned long long _holesLen;
    id *_sizeRanks;
    NSMutableArray *_orderedByStart;
    NSString *_path;
    char _isDirty;
}

- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)clear;
- (void)save;
- (char)isDirty;
- (id)initWithFilePath:(id)a0;
- (void)_insertHoleInRanks:(id)a0;
- (void)_removeHoleFromRanks:(id)a0;
- (unsigned long long)allocateSpaceForLen:(unsigned long long)a0 added:(char *)a1;
- (void)assertSpaceIsRetainedAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (char)canFindHoleForLen:(unsigned long long)a0;
- (char)checkConsistency;
- (char)checkHolesLenConsistency;
- (void)commonInitWithDictionary:(id)a0;
- (id)dataToSave;
- (float)frag;
- (char)getLastHoleStart:(unsigned long long *)a0 len:(unsigned long long *)a1;
- (id)orderedByStart;
- (void)releaseSpaceAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (unsigned long long)totalLen;
- (void)truncateFromPosition:(unsigned long long)a0;

@end
