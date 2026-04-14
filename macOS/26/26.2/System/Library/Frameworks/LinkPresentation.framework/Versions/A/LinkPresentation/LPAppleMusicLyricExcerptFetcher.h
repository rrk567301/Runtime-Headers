@class MPStoreLyricsSnippetURLComponents, NSOperation;

@interface LPAppleMusicLyricExcerptFetcher : LPFetcher {
    id /* block */ _completionHandler;
    NSOperation *_operation;
}

@property (retain, nonatomic) MPStoreLyricsSnippetURLComponents *lyricComponents;

- (void)cancel;
- (void).cxx_destruct;
- (id)init;
- (void)completedWithLyrics:(id)a0;
- (void)fetchWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
