@interface _NSDocumentBasicAsyncOperation : NSOperation {
    _Atomic char _readying;
    _Atomic char _ready;
}

- (id)init;
- (void)finish;
- (char)isReady;

@end
