@class NSString, NSURL, NSArray;

@interface WebBookmarkLeaf : SafariWebBookmark <WBSBookmarkEntityRepresentable> {
    NSString *_threadUnsafeUserVisibleURLString;
    BOOL _shouldReleaseIconForHost;
}

@property (copy, nonatomic) NSString *previewText;
@property (readonly, copy, nonatomic) NSString *URLString;
@property (readonly, copy, nonatomic) NSString *userVisibleURLString;
@property (readonly, nonatomic) NSURL *canonicalURL;
@property (copy, nonatomic) NSString *siteName;
@property (nonatomic) BOOL shouldNeverFetchMetadata;
@property (retain, nonatomic) NSURL *imageURL;
@property (nonatomic) BOOL hasUserDefinedPreviewText;
@property (copy, nonatomic) NSArray *topicQIDs;
@property (copy, nonatomic) NSString *UUID;
@property (readonly, copy) NSString *title;
@property (readonly, copy, nonatomic) NSURL *url;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setGroup:(id)a0;
- (id)description;
- (id)icon;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)iconURLString;
- (id)_mutableDictionaryRepresentation;
- (long long)bookmarkType;
- (void)_notifyURLStringDidChangeFrom:(id)a0 to:(id)a1;
- (void)_setPreviewText:(id)a0 interactive:(BOOL)a1;
- (void)_updateStateHash:(id)a0;
- (BOOL)canOpenInTabs;
- (id)initFromDictionaryRepresentation:(id)a0 topLevelOnly:(BOOL)a1 withGroup:(id)a2;
- (id)initWithTopSite:(id)a0;
- (BOOL)isUserVisiblyEqualToBookmark:(id)a0;
- (BOOL)mergeAttributesFromBookmark:(id)a0;
- (BOOL)setPreviewText:(id)a0 ignoringIfExistingIsUserDefined:(BOOL)a1;
- (void)setURLString:(id)a0 changeWasInteractive:(BOOL)a1;
- (void)setUserDefinedPreviewText:(id)a0;
- (BOOL)updateByCopyingAttributesFromBookmark:(id)a0 withExistingBookmarksByUUID:(id)a1;

@end
