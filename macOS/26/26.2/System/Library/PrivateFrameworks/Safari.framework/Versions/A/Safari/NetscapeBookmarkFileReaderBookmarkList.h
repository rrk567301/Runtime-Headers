@class NSString, Test_NetscapeBookmarkFileReaderBookmarkItem, SafariWebBookmark, SafariWebBookmarkList, Test_NetscapeBookmarkFileReaderBookmarkList, WebBookmarkGroup;

@interface NetscapeBookmarkFileReaderBookmarkList : NSObject <NetscapeBookmarkFileReaderBookmarkItem> {
    SafariWebBookmarkList *_bookmarkList;
    Test_NetscapeBookmarkFileReaderBookmarkList *_test_bookmarkList;
}

@property (readonly, nonatomic) WebBookmarkGroup *group;
@property (readonly, nonatomic) unsigned long long numberOfChildren;
@property (readonly, nonatomic) SafariWebBookmark *bookmark;
@property (readonly, nonatomic) Test_NetscapeBookmarkFileReaderBookmarkItem *test_bookmark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (id)firstChildWithTitle:(id)a0;
- (id)firstFolderWithTitle:(id)a0;
- (id)initWithBookmarkList:(id)a0 test_netscapeBookmarkFileReaderBookmarkList:(id)a1;

@end
