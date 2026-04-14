@interface CSPrivateSearchableIndex : CSUnhousedSearchableIndex

+ (id)defaultSearchableIndex;

- (id)initialConnection;
- (const char *)defaultIndexPath;
- (id)addExtensionToken:(id)a0 indexPath:(const char *)a1 connection:(id)a2;

@end
