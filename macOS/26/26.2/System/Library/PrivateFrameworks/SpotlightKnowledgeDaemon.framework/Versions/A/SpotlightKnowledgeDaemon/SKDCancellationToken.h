@interface SKDCancellationToken : NSObject {
    void /* unknown type, empty encoding */ _isCancelled;
}

@property (nonatomic, readonly) BOOL isCancelled;

- (void)cancel;
- (void).cxx_destruct;
- (id)init;

@end
