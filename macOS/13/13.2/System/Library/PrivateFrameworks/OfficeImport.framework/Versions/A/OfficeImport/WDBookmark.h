@class NSString;

@interface WDBookmark : WDRun {
    NSString *mName;
    int mBookmarkType;
}

- (id)name;
- (id)description;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (id)initWithParagraph:(id)a0 name:(id)a1 type:(int)a2;
- (int)bookmarkType;
- (void)setBookmarkType:(int)a0;
- (int)runType;

@end
