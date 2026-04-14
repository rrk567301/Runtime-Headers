@class NSError;

@interface WebBookmarkExporter : NSObject {
    NSError *_error;
}

- (void).cxx_destruct;
- (id)error;
- (id)initWithRootBookmark:(id)a0 path:(id)a1 hideExtension:(BOOL)a2;
- (id)leadingWhiteSpaceForIndentLevel:(int)a0;
- (id)escapeHTML:(id)a0;
- (id)stringForRootBookmark:(id)a0 withIndentLevel:(int)a1;
- (id)stringForBookmarkLeaf:(id)a0 withIndentLevel:(int)a1;
- (id)stringForBookmarkList:(id)a0 withIndentLevel:(int)a1;
- (id)stringForBookmark:(id)a0 withIndentLevel:(int)a1;
- (id)fileContentsWithRootBookmark:(id)a0;

@end
