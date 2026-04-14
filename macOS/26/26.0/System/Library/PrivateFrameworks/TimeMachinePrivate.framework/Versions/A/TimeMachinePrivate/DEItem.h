@class NSURL, NSString, NSSet;

@interface DEItem : NSObject {
    NSURL *_url;
    NSString *_name;
    unsigned long long _volumeID;
    unsigned long long _inode;
    int _kind;
    struct __CFFileSecurity { } *_securityRef;
    NSSet *_xattrKeys;
}

@property (retain) NSURL *comparisonRootURL;
@property unsigned long long comparisonFlags;
@property (copy) id /* block */ xattrKeyFilter;

+ (id)itemWithFileURL:(id)a0;

- (unsigned int)UID;
- (unsigned long long)inode;
- (unsigned short)mode;
- (BOOL)isRestricted;
- (id)URL;
- (id)symlinkTarget;
- (void)dealloc;
- (BOOL)isVolume;
- (int)kind;
- (BOOL)exists;
- (id)path;
- (BOOL)isPackage;
- (id)description;
- (BOOL)isCompressed;
- (id)creationDate;
- (id)name;
- (BOOL)isHidden;
- (unsigned long long)size;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (id)contentModificationDate;
- (const char *)fileSystemRepresentation;
- (long long)compareName:(id)a0;
- (unsigned long long)volumeID;
- (unsigned int)GID;
- (BOOL)compareContentModificationDate:(id)a0;
- (struct _acl { } *)copyACL;
- (BOOL)isUserImmutable;
- (unsigned long long)_calculateDeepSize;
- (BOOL)_isType:(struct __CFString { } *)a0;
- (struct __CFFileSecurity { } *)_securityRef;
- (id)attributeModificationDate;
- (BOOL)compareACLs:(id)a0;
- (BOOL)compareAttributeModificationDate:(id)a0;
- (BOOL)compareCompressed:(id)a0;
- (BOOL)compareCreationDate:(id)a0;
- (BOOL)compareDataFork:(id)a0 buffer:(struct __DEComparisonBuffer { char *x0; unsigned int x1; char *x2; unsigned int x3; } *)a1;
- (unsigned long long)compareFully:(id)a0;
- (BOOL)compareGID:(id)a0;
- (BOOL)compareHidden:(id)a0;
- (unsigned long long)compareMetadata:(id)a0;
- (BOOL)compareMode:(id)a0;
- (long long)compareNameReverse:(id)a0;
- (BOOL)compareNoUnlink:(id)a0;
- (BOOL)compareRestricted:(id)a0;
- (BOOL)compareSiblingLinks:(id)a0;
- (BOOL)compareSize:(id)a0;
- (BOOL)compareSystemAppend:(id)a0;
- (BOOL)compareSystemDataless:(id)a0;
- (BOOL)compareSystemImmutable:(id)a0;
- (BOOL)compareUID:(id)a0;
- (BOOL)compareUserAppend:(id)a0;
- (BOOL)compareUserImmutable:(id)a0;
- (BOOL)compareXattrs:(id)a0;
- (struct _acl { } *)copyACLForComparison;
- (id)filteredXattrKeys;
- (BOOL)isNoUnlink;
- (BOOL)isSiblingLink:(id)a0;
- (BOOL)isSystemAppend;
- (BOOL)isSystemDataless;
- (BOOL)isSystemImmutable;
- (BOOL)isUserAppend;
- (id)siblingLinkPaths;
- (id)siblingLinkPathsForComparison;
- (id)xattrKeys;

@end
