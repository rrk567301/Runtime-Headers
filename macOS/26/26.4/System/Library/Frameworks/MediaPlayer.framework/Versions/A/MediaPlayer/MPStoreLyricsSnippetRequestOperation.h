@class MPStoreLyricsSnippetURLComponents;

@interface MPStoreLyricsSnippetRequestOperation : MPAsyncOperation

@property (retain, nonatomic) MPStoreLyricsSnippetURLComponents *snippetURL;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)finishWithError:(id)a0;
- (void)execute;
- (void).cxx_destruct;

@end
