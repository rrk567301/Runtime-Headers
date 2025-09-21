@interface CKDCancelToken : NSObject <CKDCancelling> {
    char _isCancelled;
}

@property (copy, nonatomic) id /* block */ cancelAction;

- (void).cxx_destruct;
- (void)cancel;
- (char)isCancelled;

@end
