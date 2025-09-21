@class NSDocument, NSFileVersion, NSMutableArray;

@interface _NSDocumentRevisionsLoadingOperation : NSOperation {
    NSFileVersion *version;
    NSMutableArray *documentConsumers;
    id /* block */ finalCompletionBlock;
    char documentLoadingComplete;
    char hasWaiter;
}

@property (retain) NSDocument *document;

- (void).cxx_destruct;
- (void)waitUntilFinished;
- (id)initWithVersion:(id)a0;
- (void)main;
- (void)setCompletionBlock:(id /* block */)a0;
- (void)_documentLoadingDidComplete;
- (void)addDocumentConsumer:(id /* block */)a0;

@end
