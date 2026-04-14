@interface SKDCancellationToken : NSObject {
    void /* unknown type, empty encoding */ _isCancelled;
    void /* unknown type, empty encoding */ _listeners;
}

@property (nonatomic, readonly) BOOL isCancelled;

- (void)cancel;
- (void).cxx_destruct;
- (id)init;

@end
