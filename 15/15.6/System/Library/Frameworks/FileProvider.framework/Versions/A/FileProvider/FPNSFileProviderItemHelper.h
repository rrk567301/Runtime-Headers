@class NSError, NSString, UTType, NSDate, NSData, NSFileProviderItemVersion, NSDictionary, NSPersonNameComponents, NSNumber;

@interface FPNSFileProviderItemHelper : NSObject <NSFileProviderItem>

@property (readonly, copy, nonatomic) NSString *itemIdentifier;
@property (readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) UTType *contentType;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) struct NSFileProviderTypeAndCreator { unsigned int x0; unsigned int x1; } typeAndCreator;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) unsigned long long fileSystemFlags;
@property (readonly, copy, nonatomic) NSNumber *documentSize;
@property (readonly, copy, nonatomic) NSNumber *childItemCount;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDate *contentModificationDate;
@property (readonly, nonatomic) NSDictionary *extendedAttributes;
@property (readonly, copy, nonatomic) NSDate *lastUsedDate;
@property (readonly, copy, nonatomic) NSData *tagData;
@property (readonly, copy, nonatomic) NSNumber *favoriteRank;
@property (readonly, nonatomic, getter=isTrashed) char trashed;
@property (readonly, nonatomic, getter=isUploaded) char uploaded;
@property (readonly, nonatomic, getter=isUploading) char uploading;
@property (readonly, copy, nonatomic) NSError *uploadingError;
@property (readonly, nonatomic, getter=isDownloaded) char downloaded;
@property (readonly, nonatomic, getter=isDownloading) char downloading;
@property (readonly, copy, nonatomic) NSError *downloadingError;
@property (readonly, nonatomic, getter=isMostRecentVersionDownloaded) char mostRecentVersionDownloaded;
@property (readonly, nonatomic, getter=isShared) char shared;
@property (readonly, nonatomic, getter=isSharedByCurrentUser) char sharedByCurrentUser;
@property (readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property (readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (readonly, nonatomic) NSData *versionIdentifier;
@property (readonly, nonatomic) NSFileProviderItemVersion *itemVersion;
@property (readonly, copy, nonatomic) NSString *symlinkTargetPath;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) long long contentPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)fp_downloadingStatus;
- (char)fp_isReadable;
- (char)fp_isWritable;
- (id)fp_sharingCurrentUserPermissions;
- (id)fp_sharingCurrentUserRole;

@end
