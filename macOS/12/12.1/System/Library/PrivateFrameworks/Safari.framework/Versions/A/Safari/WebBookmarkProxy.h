@interface WebBookmarkProxy : SafariWebBookmark

- (id)icon;
- (id)iconURLString;
- (long long)bookmarkType;
- (id)_mutableDictionaryRepresentation;
- (id)initFromDictionaryRepresentation:(id)a0 topLevelOnly:(BOOL)a1 withGroup:(id)a2;

@end
