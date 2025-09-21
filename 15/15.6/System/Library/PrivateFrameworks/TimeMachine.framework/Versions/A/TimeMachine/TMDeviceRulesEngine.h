@class NSSet, TMSpotlightOracle, NSArray, MDSPathFilter, TMDisk;

@interface TMDeviceRulesEngine : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stickyExclusionCacheLock;
    struct _CFBurstTrie { } *_undiscoveredStickyExclusionCache;
}

@property (copy) NSSet *stickyExclusionPaths;
@property (readonly) TMDisk *disk;
@property (readonly) MDSPathFilter *baseFilter;
@property (readonly) MDSPathFilter *customExclusionsFilter;
@property (readonly) TMSpotlightOracle *spotlightOracle;
@property (readonly, copy) NSArray *neverEnumeratePaths;
@property (readonly) struct _TMRulesEngineStatistics { unsigned long long urlQueryCount; unsigned long long pathQueryCount; unsigned long long rawPathQueryCount; unsigned long long deviceIDFaults; unsigned long long isDirectoryFaults; unsigned long long contentsExcludedHits; unsigned long long fileContentsExcludedHits; unsigned long long spotlightMisses; unsigned long long stickyXattrFaults; } statistics;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDisk:(id)a0 baseFilter:(id)a1 customExclusionsFilter:(id)a2 spotlightOracle:(id)a3;
- (char)URLIsExcluded:(id)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; char x2; char x3; char x4; } *)a1;
- (char)URLIsExcluded:(id)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; char x2; char x3; char x4; } *)a1 details:(struct _TMRulesQueryDetails { char x0; char x1; char x2; char x3; unsigned long long x4; } *)a2;
- (char)URLIsExcluded:(id)a0 isDir:(char)a1;
- (char)_cacheContainsRawPath:(const char *)a0 length:(unsigned long long)a1 isExcluded:(char *)a2;
- (void)_dumpCache;
- (long long)_exclusionStatusForFilesystemRepresentation:(const char *)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; char x2; char x3; char x4; } *)a1 details:(struct _TMRulesQueryDetails { char x0; char x1; char x2; char x3; unsigned long long x4; } *)a2 error:(id *)a3;
- (void)_fillCachedExclusionAnswer:(char)a0 forParentLevels:(unsigned int)a1 ofRawPath:(const char *)a2 length:(unsigned long long)a3;
- (void)_fillCachedExclusionAnswer:(char)a0 forRawPath:(const char *)a1 length:(unsigned long long)a2;
- (char)_rawPathIsExcluded:(const char *)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; char x2; char x3; char x4; } *)a1 details:(struct _TMRulesQueryDetails { char x0; char x1; char x2; char x3; unsigned long long x4; } *)a2;
- (char)_rawPathIsFile:(const char *)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; char x2; char x3; char x4; } *)a1;
- (long long)_undiscoveredStickyExclusionStatusForRawPath:(const char *)a0 filterRules:(struct { unsigned long long x0; unsigned long long x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; })a1 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; char x2; char x3; char x4; } *)a2 error:(id *)a3;
- (long long)exclusionStatusForFilesystemRepresentation:(const char *)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; char x2; char x3; char x4; } *)a1 error:(id *)a2;
- (char)pathIsExcluded:(id)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; char x2; char x3; char x4; } *)a1;
- (char)pathIsExcluded:(id)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; char x2; char x3; char x4; } *)a1 details:(struct _TMRulesQueryDetails { char x0; char x1; char x2; char x3; unsigned long long x4; } *)a2;
- (char)pathIsExcluded:(id)a0 isDir:(char)a1;
- (char)rawPathIsExcluded:(const char *)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; char x2; char x3; char x4; } *)a1;
- (char)rawPathIsExcluded:(const char *)a0 hints:(struct _TMRulesQueryHints { unsigned short x0; int x1; char x2; char x3; char x4; } *)a1 details:(struct _TMRulesQueryDetails { char x0; char x1; char x2; char x3; unsigned long long x4; } *)a2;
- (unsigned long long)realmForPath:(id)a0;
- (unsigned long long)realmForRawPath:(const char *)a0;
- (unsigned long long)realmForURL:(id)a0;

@end
