@class NSString, Test_NetscapeBookmarkFileReaderBookmarkItem, SafariWebBookmark, Test_NetscapeBookmarkFileReaderBookmark;

@interface NetscapeBookmarkFileReaderBookmark : NSObject <NetscapeBookmarkFileReaderBookmarkItem> {
    SafariWebBookmark *_bookmark;
    Test_NetscapeBookmarkFileReaderBookmark *_test_bookmark;
}

@property (readonly, nonatomic) SafariWebBookmark *bookmark;
@property (readonly, nonatomic) Test_NetscapeBookmarkFileReaderBookmarkItem *test_bookmark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBookmark:(id)a0 test_netscapeBookmarkFileReaderBookmark:(id)a1;
- (void)setURLString:(id)a0 changeWasInteractive:(BOOL)a1;

@end
