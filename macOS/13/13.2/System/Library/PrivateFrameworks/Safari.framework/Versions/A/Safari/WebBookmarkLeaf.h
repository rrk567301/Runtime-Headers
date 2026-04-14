@class NSString, NSURL, NSArray;

@interface WebBookmarkLeaf : SafariWebBookmark {
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

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setGroup:(id)a0;
- (id)url;
- (id)icon;
- (id)iconURLString;
- (id)_mutableDictionaryRepresentation;
- (long long)bookmarkType;
- (BOOL)canOpenInTabs;
- (id)initFromDictionaryRepresentation:(id)a0 topLevelOnly:(BOOL)a1 withGroup:(id)a2;
- (id)initWithTopSite:(id)a0;
- (BOOL)isUserVisiblyEqualToBookmark:(id)a0;
- (BOOL)updateByCopyingAttributesFromBookmark:(id)a0 withExistingBookmarksByUUID:(id)a1;
- (BOOL)mergeAttributesFromBookmark:(id)a0;
- (void)_updateStateHash:(struct SHA256 { struct CC_SHA256state_st { unsigned int x0[2]; unsigned int x1[8]; unsigned int x2[16]; } x0; } *)a0;
- (void)_setPreviewText:(id)a0 interactive:(BOOL)a1;
- (void)setUserDefinedPreviewText:(id)a0;
- (BOOL)setPreviewText:(id)a0 ignoringIfExistingIsUserDefined:(BOOL)a1;
- (void)setURLString:(id)a0 changeWasInteractive:(BOOL)a1;
- (void)_notifyURLStringDidChangeFrom:(id)a0 to:(id)a1;

@end
