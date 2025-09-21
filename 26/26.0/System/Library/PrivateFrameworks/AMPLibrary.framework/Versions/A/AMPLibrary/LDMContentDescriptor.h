@class NSString;

@interface LDMContentDescriptor : NSObject <NSCopying, NSSecureCoding> {
    struct DBContentDescriptor { unsigned char kind; struct DBContentIdentifiers { struct ITString { void *mUTF16Data; void *mUTF8Data; } cloudUniversalLibraryID; struct ITString { void *mUTF16Data; void *mUTF8Data; } socialProfileID; struct ITString { void *mUTF16Data; void *mUTF8Data; } storeCloudAlbumID; struct ITString { void *mUTF16Data; void *mUTF8Data; } storeCloudID; struct ITString { void *mUTF16Data; void *mUTF8Data; } storePurchasedAdamID; struct ITString { void *mUTF16Data; void *mUTF8Data; } storeAdamID; struct ITString { void *mUTF16Data; void *mUTF8Data; } utsItemID; struct ITString { void *mUTF16Data; void *mUTF8Data; } rentalID; struct DBIdentifier { unsigned long long mDBID; unsigned long long mPID; unsigned char mItemKind; unsigned long long mParentPID; unsigned long long mPlaylistItemPID; } libraryItemID; } identifiers; } _contentDescriptor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, copy, nonatomic) NSString *libraryIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)init:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void *)contentDescriptor;

@end
