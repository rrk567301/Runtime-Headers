@class NSDocument, NSFileVersion, NSMutableArray;

@interface _NSDocumentRevisionsLoadingOperation : NSOperation {
    NSFileVersion *version;
    NSMutableArray *documentConsumers;
    id /* block */ finalCompletionBlock;
    BOOL documentLoadingComplete;
    BOOL hasWaiter;
}

@property (retain) NSDocument *document;

- (void)setCompletionBlock:(id /* block */)a0;
- (id)initWithVersion:(id)a0;
- (void)waitUntilFinished;
- (void)main;
- (void).cxx_destruct;
- (void)_documentLoadingDidComplete;
- (void)addDocumentConsumer:(id /* block */)a0;

@end
