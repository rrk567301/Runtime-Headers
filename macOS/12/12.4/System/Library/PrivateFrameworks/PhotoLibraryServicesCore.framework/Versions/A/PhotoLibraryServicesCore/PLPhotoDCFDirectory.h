@class NSMutableDictionary, PLPhotoDCIMDirectory;

@interface PLPhotoDCFDirectory : PLPhotoDCFObject {
    PLPhotoDCIMDirectory *_dcimDirectory;
    NSMutableDictionary *_fileGroupsByNumber;
    int _maxFileGroupNumber;
    int _lastUsedFileGroupNumber;
}

@property BOOL considerInvalidFileGroups;

+ (void)initializeFileGroupPrefixAndExtensions;
+ (id)fileGroupRequiredEmptyPrefixes;
+ (id)fileGroupRequiredEmptyExtensions;

- (void).cxx_destruct;
- (id)fullPath;
- (id)_lastUsedFileGroupUserInfoKey;
- (unsigned int)_calculateBaseDirectoryValue;
- (BOOL)canAddFileGroupWithGroupNumber:(int)a0;
- (id)fileGroups;
- (BOOL)_canAddItemWithPrefix:(id)a0 minimumFileGroupNumber:(int)a1;
- (BOOL)_canAddItemWithPrefix:(id)a0;
- (BOOL)isEntensionValid:(id)a0;
- (id)_nextAvailableFileGroupWithPrefix:(id)a0 extension:(id)a1;
- (id)initWithName:(id)a0 number:(int)a1 dcimDirectory:(id)a2;
- (id)dcimDirectory;
- (BOOL)canAddImage;
- (BOOL)canAddVideo;
- (void)ensureDirectoryExists;
- (id)nextAvailableFileGroup;
- (id)nextAvailableVideoFileGroupWithExtension:(id)a0;
- (void)removeFileGroup:(id)a0;
- (void)setWriteIsPending:(BOOL)a0;

@end
