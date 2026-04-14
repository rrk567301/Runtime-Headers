@class NSString;

@interface WDBookmark : WDRun {
    NSString *mName;
    int mBookmarkType;
}

- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (int)runType;
- (int)bookmarkType;
- (id)initWithParagraph:(id)a0 name:(id)a1 type:(int)a2;
- (void)setBookmarkType:(int)a0;

@end
