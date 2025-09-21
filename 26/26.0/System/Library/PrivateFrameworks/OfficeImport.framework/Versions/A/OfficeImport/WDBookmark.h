@class NSString;

@interface WDBookmark : WDRun {
    NSString *mName;
    int mBookmarkType;
}

- (void)setName:(id)a0;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (int)runType;
- (int)bookmarkType;
- (id)initWithParagraph:(id)a0 name:(id)a1 type:(int)a2;
- (void)setBookmarkType:(int)a0;

@end
