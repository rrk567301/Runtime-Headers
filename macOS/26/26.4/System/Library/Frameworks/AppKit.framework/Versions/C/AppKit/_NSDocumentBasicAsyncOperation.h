@interface _NSDocumentBasicAsyncOperation : NSOperation {
    _Atomic BOOL _readying;
    _Atomic BOOL _ready;
}

- (void)finish;
- (BOOL)isReady;
- (id)init;

@end
