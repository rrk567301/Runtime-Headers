@interface _NSDocumentBasicAsyncOperation : NSOperation {
    _Atomic BOOL _readying;
    _Atomic BOOL _ready;
}

- (BOOL)isReady;
- (void)finish;
- (id)init;

@end
