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

- (BOOL)save;
- (void)compact;
- (id)orderedByStart;
- (id)initWithDictionary:(id)a0 cacheThread:(id)a1;
- (void)clear;
- (BOOL)canFindHoleForLen:(unsigned long long)a0;
- (float)frag;
- (unsigned long long)allocateSpaceForLength:(unsigned long long)a0 added:(BOOL *)a1;
- (id)lastHole;
- (id)initWithCacheThread:(id)a0;
- (BOOL)checkHolesLenConsistency;
- (void)truncateFromPosition:(unsigned long long)a0;
- (void)_insertHoleInRanks:(id)a0;
- (id)initWithFilePath:(id)a0 cacheThread:(id)a1;
- (void).cxx_destruct;
- (void)assertSpaceIsRetainedAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (id)dataToSave;
- (BOOL)checkConsistency;
- (void)truncateUselessSpaceAtEndOfFile;
- (void)_removeHoleFromRanks:(id)a0;
- (unsigned long long)totalLen;
- (id)initWithHolePositions:(id)a0 holeLengths:(id)a1 totalLength:(long long)a2 holesLength:(long long)a3 cacheThread:(id)a4;
- (void)releaseSpaceAtPos:(unsigned long long)a0 withLen:(unsigned long long)a1;
- (BOOL)isDirty;

@end
