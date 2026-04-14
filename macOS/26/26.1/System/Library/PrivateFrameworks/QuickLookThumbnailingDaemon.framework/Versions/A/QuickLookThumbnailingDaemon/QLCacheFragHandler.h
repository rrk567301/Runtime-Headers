@class NSArray, NSString, _QLCacheThread, NSMutableArray;

@interface QLCacheFragHandler : NSObject {
    unsigned long long _totalLen;
    unsigned long long _holesLen;
    NSArray *_sizeRanks;
    NSMutableArray *_orderedByStart;
    NSString *_path;
    BOOL _isDirty;
    BOOL _needsCompact;
}

@property (weak) _QLCacheThread *cacheThread;

+ (void)initialize;

- (void)compact;
- (void)clear;
- (BOOL)isDirty;
- (id)lastHole;
- (void)assertSpaceIsRetainedAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (unsigned long long)allocateSpaceForLength:(unsigned long long)a0 added:(BOOL *)a1;
- (BOOL)checkConsistency;
- (BOOL)canFindHoleForLen:(unsigned long long)a0;
- (BOOL)checkHolesLenConsistency;
- (void)truncateUselessSpaceAtEndOfFile;
- (id)initWithFilePath:(id)a0 cacheThread:(id)a1;
- (id)orderedByStart;
- (id)initWithHolePositions:(id)a0 holeLengths:(id)a1 totalLength:(long long)a2 holesLength:(long long)a3 cacheThread:(id)a4;
- (id)initWithCacheThread:(id)a0;
- (unsigned long long)totalLen;
- (void)releaseSpaceAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (float)frag;
- (void).cxx_destruct;
- (void)_removeHoleFromRanks:(id)a0;
- (id)dataToSave;
- (id)initWithDictionary:(id)a0 cacheThread:(id)a1;
- (BOOL)save;
- (void)_insertHoleInRanks:(id)a0;
- (void)truncateFromPosition:(unsigned long long)a0;

@end
