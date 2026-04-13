@class NSArray, NSMutableArray, NSCountedSet;

@interface SafariWebBookmarkList : SafariWebBookmark {
    NSMutableArray *_threadUnsafeChildren;
    NSCountedSet *_threadUnsafeChildWrappers;
}

@property (readonly, nonatomic) unsigned long long numberOfDescendants;
@property (readonly) BOOL automaticallyOpensInTabs;
@property (readonly, copy, nonatomic) NSArray *folderAndLeafChildren;
@property (readonly, copy, nonatomic) NSArray *leafChildren;
@property (readonly, nonatomic, getter=isReadingListFolder) BOOL readingListFolder;

+ (id)smallImageForBookmarkList;
+ (id)_test_allDescendentsOfBookmarkList:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)childAtIndex:(unsigned long long)a0;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (id)_children;
- (id)icon;
- (void)removeChild:(id)a0;
- (id)iconURLString;
- (unsigned long long)numberOfChildren;
- (long long)bookmarkType;
- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (BOOL)canOpenInTabs;
- (void)getFolderAndLeafChildrenWithCompletionHandler:(id /* block */)a0;
- (void)getDescendantsPassingTest:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)getLeafChildrenWithCompletionHandler:(id /* block */)a0;
- (BOOL)isUserVisiblyEqualToBookmark:(id)a0;
- (void)clearDAVSyncState;
- (void)setAutomaticallyOpensInTabs:(BOOL)a0 changeWasInteractive:(BOOL)a1;
- (unsigned long long)indexOfChild:(id)a0;
- (void)enumerateChildrenWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; })indexesForShownCollectionsWithChildCount:(unsigned long long *)a0;
- (void)enumerateLeafDescendantsUsingBlock:(id /* block */)a0;
- (id)firstChildWithURL:(id)a0;
- (BOOL)mergeAttributesFromBookmark:(id)a0;
- (unsigned long long)numberOfChildrenMatchingBookmark:(id)a0;
- (id)initWithIdentifier:(id)a0 UUID:(id)a1 group:(id)a2;
- (void)_updateStateHash:(struct SHA256 { struct CC_SHA256state_st { unsigned int x0[2]; unsigned int x1[8]; unsigned int x2[16]; } x0; } *)a0;
- (id)_mutableDictionaryRepresentation;
- (id)initFromDictionaryRepresentation:(id)a0 topLevelOnly:(BOOL)a1 withGroup:(id)a2;
- (void)updateByCopyingSyncDataFromBookmark:(id)a0 withChildBookmarksByUUID:(id)a1;
- (void)clearAllChangesRecursively;
- (BOOL)updateByCopyingAttributesFromBookmark:(id)a0 withExistingBookmarksByUUID:(id)a1;
- (id)_childrenIncludingFolders:(BOOL)a0;
- (void)_appendDescendantsPassingTest:(id /* block */)a0 toArray:(id)a1;
- (void)_enumerateLeafDescendantsOnChildrenAccessQueueUsingBlock:(id /* block */)a0;
- (id)test_allDescendents;

@end
