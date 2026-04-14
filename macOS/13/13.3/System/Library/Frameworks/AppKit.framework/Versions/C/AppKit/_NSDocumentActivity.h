@interface _NSDocumentActivity : _NSDocumentSerializationObject {
    BOOL _cachedCancellationHandlerResponse;
}

@property (copy) id /* block */ cancellationHandler;
@property (getter=isCancelled) BOOL cancelled;

- (void)dealloc;
- (void)cancelAndFinishAsynchronously:(BOOL *)a0;

@end
