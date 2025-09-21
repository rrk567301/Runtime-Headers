@class NSMutableDictionary, PLPhotoDCIMDirectory;

@interface PLPhotoDCFDirectory : PLPhotoDCFObject {
    PLPhotoDCIMDirectory *_dcimDirectory;
    NSMutableDictionary *_fileGroupsByNumber;
    int _maxFileGroupNumber;
    int _lastUsedFileGroupNumber;
}

@property char considerInvalidFileGroups;

+ (id)fileGroupRequiredEmptyExtensions;
+ (id)fileGroupRequiredEmptyPrefixes;
+ (void)initializeFileGroupPrefixAndExtensions;

- (void).cxx_destruct;
- (id)fullPath;
- (char)canAddFileGroupWithGroupNumber:(int)a0;
- (unsigned int)_calculateBaseDirectoryValue;
- (char)_canAddItemWithPrefix:(id)a0;
- (char)_canAddItemWithPrefix:(id)a0 minimumFileGroupNumber:(int)a1;
- (id)_lastUsedFileGroupUserInfoKey;
- (id)_nextAvailableFileGroupWithPrefix:(id)a0 extension:(id)a1;
- (char)canAddImage;
- (char)canAddVideo;
- (id)dcimDirectory;
- (void)ensureDirectoryExists;
- (id)fileGroups;
- (id)initWithName:(id)a0 number:(int)a1 dcimDirectory:(id)a2;
- (char)isEntensionValid:(id)a0;
- (id)nextAvailableFileGroup;
- (id)nextAvailableVideoFileGroupWithExtension:(id)a0;
- (void)removeFileGroup:(id)a0;
- (void)setWriteIsPending:(char)a0;

@end
