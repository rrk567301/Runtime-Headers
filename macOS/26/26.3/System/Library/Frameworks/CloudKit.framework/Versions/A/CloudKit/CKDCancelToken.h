@interface CKDCancelToken : NSObject <CKDCancelling> {
    BOOL _isCancelled;
}

@property (copy, nonatomic) id /* block */ cancelAction;

- (void)cancel;
- (BOOL)isCancelled;
- (void).cxx_destruct;

@end
