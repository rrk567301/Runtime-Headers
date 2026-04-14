@class NSError;

@interface SiriUIErrorSnippetViewController : SiriUISnippetViewController {
    NSError *_error;
}

- (void)loadView;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;

@end
