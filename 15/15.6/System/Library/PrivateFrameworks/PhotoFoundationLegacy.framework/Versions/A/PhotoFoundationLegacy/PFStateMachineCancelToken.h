@interface PFStateMachineCancelToken : NSObject {
    char _isCancelled;
}

- (void)cancel;
- (char)isCancelled;

@end
