@class NSDocument, NSFileVersion, NSMutableArray;

@interface _NSDocumentRevisionsLoadingOperation : NSOperation {
    NSFileVersion *version;
    NSMutableArray *documentConsumers;
    id /* block */ finalCompletionBlock;
    BOOL documentLoadingComplete;
    BOOL hasWaiter;
}

@property (retain) NSDocument *document;

- (void)dealloc;
- (void)waitUntilFinished;
- (void)main;
- (void)setCompletionBlock:(id /* block */)a0;
- (void)addDocumentConsumer:(id /* block */)a0;
- (id)initWithVersion:(id)a0;
- (void)_documentLoadingDidComplete;

@end
