@class STKStickerSearchQuery, NSError, _STKSearchResult;

@interface _STKSearchObjCFacade : NSObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ stickerSearchDataSource;
    void /* unknown type, empty encoding */ emojiSearchDataSource;
}

@property (nonatomic) BOOL enableEmojiSearch;
@property (nonatomic) BOOL enableStickerSearch;

- (void).cxx_destruct;
- (id)init;
- (void)search:(STKStickerSearchQuery *)a0 completionHandler:(void (^)(_STKSearchResult *, NSError *))a1;

@end
