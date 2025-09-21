@class NSString, NSURL, NSArray;

@interface WebBookmarkLeaf : SafariWebBookmark <WBSBookmarkEntityRepresentable> {
    NSString *_threadUnsafeUserVisibleURLString;
    char _shouldReleaseIconForHost;
}

@property (copy, nonatomic) NSString *previewText;
@property (readonly, copy, nonatomic) NSString *URLString;
@property (readonly, copy, nonatomic) NSString *userVisibleURLString;
@property (readonly, nonatomic) NSURL *canonicalURL;
@property (copy, nonatomic) NSString *siteName;
@property (nonatomic) char shouldNeverFetchMetadata;
@property (retain, nonatomic) NSURL *imageURL;
@property (nonatomic) char hasUserDefinedPreviewText;
@property (copy, nonatomic) NSArray *topicQIDs;
@property (copy, nonatomic) NSString *UUID;
@property (readonly, copy) NSString *title;
@property (readonly, copy, nonatomic) NSURL *url;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setGroup:(id)a0;
- (id)icon;
- (id)iconURLString;
- (id)_mutableDictionaryRepresentation;
- (long long)bookmarkType;
- (void)_notifyURLStringDidChangeFrom:(id)a0 to:(id)a1;
- (void)_setPreviewText:(id)a0 interactive:(char)a1;
- (void)_updateStateHash:(struct SHA256 { struct CC_SHA256state_st { unsigned int x0[2]; unsigned int x1[8]; unsigned int x2[16]; } x0; } *)a0;
- (char)canOpenInTabs;
- (id)initFromDictionaryRepresentation:(id)a0 topLevelOnly:(char)a1 withGroup:(id)a2;
- (id)initWithTopSite:(id)a0;
- (char)isUserVisiblyEqualToBookmark:(id)a0;
- (char)mergeAttributesFromBookmark:(id)a0;
- (char)setPreviewText:(id)a0 ignoringIfExistingIsUserDefined:(char)a1;
- (void)setURLString:(id)a0 changeWasInteractive:(char)a1;
- (void)setUserDefinedPreviewText:(id)a0;
- (char)updateByCopyingAttributesFromBookmark:(id)a0 withExistingBookmarksByUUID:(id)a1;

@end
