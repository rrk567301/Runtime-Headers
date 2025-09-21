@class NSArray, NSString, _QLCacheThread, NSMutableArray;

@interface QLCacheFragHandler : NSObject {
    unsigned long long _totalLen;
    unsigned long long _holesLen;
    NSArray *_sizeRanks;
    NSMutableArray *_orderedByStart;
    NSString *_path;
    char _isDirty;
    char _needsCompact;
}

@property (weak) _QLCacheThread *cacheThread;

+ (void)initialize;

- (void).cxx_destruct;
- (void)compact;
- (void)clear;
- (char)save;
- (char)isDirty;
- (void)_insertHoleInRanks:(id)a0;
- (void)_removeHoleFromRanks:(id)a0;
- (void)assertSpaceIsRetainedAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (char)canFindHoleForLen:(unsigned long long)a0;
- (char)checkConsistency;
- (char)checkHolesLenConsistency;
- (id)dataToSave;
- (float)frag;
- (id)orderedByStart;
- (void)releaseSpaceAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (unsigned long long)totalLen;
- (void)truncateFromPosition:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0 cacheThread:(id)a1;
- (void)truncateUselessSpaceAtEndOfFile;
- (unsigned long long)allocateSpaceForLength:(unsigned long long)a0 added:(char *)a1;
- (id)initWithCacheThread:(id)a0;
- (id)initWithFilePath:(id)a0 cacheThread:(id)a1;
- (id)initWithHolePositions:(id)a0 holeLengths:(id)a1 totalLength:(long long)a2 holesLength:(long long)a3 cacheThread:(id)a4;
- (id)lastHole;

@end
