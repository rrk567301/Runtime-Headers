@class NSString;

@interface WDBookmark : WDRun {
    NSString *mName;
    int mBookmarkType;
}

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (int)runType;
- (int)bookmarkType;
- (void)setBookmarkType:(int)a0;
- (id)initWithParagraph:(id)a0 name:(id)a1 type:(int)a2;

@end
