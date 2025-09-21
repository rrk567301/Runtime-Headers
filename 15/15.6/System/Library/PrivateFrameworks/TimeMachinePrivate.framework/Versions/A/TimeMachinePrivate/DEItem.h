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

- (void)dealloc;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)URL;
- (char)isHidden;
- (id)path;
- (id)contentModificationDate;
- (const char *)fileSystemRepresentation;
- (char)isPackage;
- (char)isRestricted;
- (char)isVolume;
- (unsigned int)UID;
- (char)isCompressed;
- (unsigned long long)size;
- (int)kind;
- (id)creationDate;
- (id)initWithFileURL:(id)a0;
- (unsigned short)mode;
- (char)exists;
- (long long)compareName:(id)a0;
- (unsigned long long)inode;
- (unsigned long long)volumeID;
- (unsigned int)GID;
- (struct _acl { } *)copyACL;
- (char)isUserImmutable;
- (char)compareContentModificationDate:(id)a0;
- (unsigned long long)_calculateDeepSize;
- (char)_isType:(struct __CFString { } *)a0;
- (struct __CFFileSecurity { } *)_securityRef;
- (id)attributeModificationDate;
- (char)compareACLs:(id)a0;
- (char)compareAttributeModificationDate:(id)a0;
- (char)compareCompressed:(id)a0;
- (char)compareCreationDate:(id)a0;
- (char)compareDataFork:(id)a0 buffer:(struct __DEComparisonBuffer { char *x0; unsigned int x1; char *x2; unsigned int x3; } *)a1;
- (unsigned long long)compareFully:(id)a0;
- (char)compareGID:(id)a0;
- (char)compareHidden:(id)a0;
- (unsigned long long)compareMetadata:(id)a0;
- (char)compareMode:(id)a0;
- (long long)compareNameReverse:(id)a0;
- (char)compareNoUnlink:(id)a0;
- (char)compareRestricted:(id)a0;
- (char)compareSiblingLinks:(id)a0;
- (char)compareSize:(id)a0;
- (char)compareSystemAppend:(id)a0;
- (char)compareSystemDataless:(id)a0;
- (char)compareSystemImmutable:(id)a0;
- (char)compareUID:(id)a0;
- (char)compareUserAppend:(id)a0;
- (char)compareUserImmutable:(id)a0;
- (char)compareXattrs:(id)a0;
- (struct _acl { } *)copyACLForComparison;
- (id)filteredXattrKeys;
- (char)isNoUnlink;
- (char)isSiblingLink:(id)a0;
- (char)isSystemAppend;
- (char)isSystemDataless;
- (char)isSystemImmutable;
- (char)isUserAppend;
- (id)siblingLinkPaths;
- (id)siblingLinkPathsForComparison;
- (id)symlinkTarget;
- (id)xattrKeys;

@end
