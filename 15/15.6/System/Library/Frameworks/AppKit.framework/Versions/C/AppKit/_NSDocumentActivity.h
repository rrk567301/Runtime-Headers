@interface _NSDocumentActivity : _NSDocumentSerializationObject {
    char _cachedCancellationHandlerResponse;
}

@property (copy) id /* block */ cancellationHandler;
@property (getter=isCancelled) char cancelled;

- (void).cxx_destruct;
- (void)cancelAndFinishAsynchronously:(char *)a0;

@end
