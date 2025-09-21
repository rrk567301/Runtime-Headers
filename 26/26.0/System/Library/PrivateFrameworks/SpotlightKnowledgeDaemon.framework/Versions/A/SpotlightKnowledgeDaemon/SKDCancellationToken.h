@interface SKDCancellationToken : NSObject {
    void /* unknown type, empty encoding */ _isCancelled;
}

@property (nonatomic, readonly) BOOL isCancelled;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
