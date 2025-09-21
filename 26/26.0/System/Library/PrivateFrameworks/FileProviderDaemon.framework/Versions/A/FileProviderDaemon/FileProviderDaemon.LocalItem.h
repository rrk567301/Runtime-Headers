@class UTType, NSString, NSData, NSDate, NSFileProviderItemVersion, NSURL, NSDictionary, NSPersonNameComponents, NSArray, NSNumber;

@interface FileProviderDaemon.LocalItem : NSObject <NSFileProviderItem, NSFileProviderItem_Private> {
    void /* function */ filename;
    void /* unknown type, empty encoding */ contentType;
    void /* unknown type, empty encoding */ creationDate;
    void /* unknown type, empty encoding */ contentModificationDate;
    void /* unknown type, empty encoding */ lastUsedDate;
    void /* function */ tagData;
    void /* unknown type, empty encoding */ isAncestorInTrash;
    void /* unknown type, empty encoding */ mostRecentEditorNameComponents;
    void /* unknown type, empty encoding */ fileURL;
    void /* function */ fp_spotlightSubDomainIdentifier;
    void /* function */ extendedAttributes;
    void /* function */ conflictingVersions;
    void /* function */ symlinkTargetPath;
    void /* function */ originatorInfo;
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ isFolder;
    void /* unknown type, empty encoding */ isPackage;
    void /* unknown type, empty encoding */ isRegularItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerItem;
}

@property (nonatomic) unsigned long long fileID;
@property (nonatomic, readonly) NSNumber *hasUnresolvedConflicts;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) NSString *parentItemIdentifier;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) UTType *contentType;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly) NSNumber *documentSize;
@property (nonatomic, readonly) NSNumber *childItemCount;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *contentModificationDate;
@property (nonatomic, readonly) NSDate *lastUsedDate;
@property (nonatomic, readonly) NSData *tagData;
@property (nonatomic, readonly) NSNumber *favoriteRank;
@property (nonatomic, readonly) BOOL isTrashed;
@property (nonatomic, readonly) NSFileProviderItemVersion *itemVersion;
@property (nonatomic, readonly) BOOL excludedFromSync;
@property (nonatomic, readonly) struct NSFileProviderTypeAndCreator { unsigned int x0; unsigned int x1; } typeAndCreator;
@property (nonatomic, readonly) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (nonatomic, readonly) BOOL isUploadedTestingImpl;
@property (nonatomic, readonly) BOOL isDownloadedTestingImpl;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, readonly) BOOL fp_isUbiquitous;
@property (nonatomic, readonly) NSString *fp_spotlightSubDomainIdentifier;
@property (nonatomic, readonly) unsigned long long fileSystemFlags;
@property (nonatomic, readonly) NSDictionary *extendedAttributes;
@property (nonatomic, readonly) NSArray *conflictingVersions;
@property (nonatomic, readonly) NSString *symlinkTargetPath;
@property (nonatomic, readonly) NSData *originatorInfo;
@property (nonatomic, readonly) BOOL fp_isContainer;
@property (nonatomic, readonly) NSString *fp_appContainerBundleIdentifier;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isExcludedFromSync;

@end
