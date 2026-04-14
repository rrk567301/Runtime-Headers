@interface CoreServicesUI.OpenResourceOperationCompletionAdapter : NSObject <LSOpenResourceOperationDelegate> {
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ completionQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)openResourceOperation:(id)a0 didFailWithError:(id)a1;
- (void)openResourceOperationDidComplete:(id)a0;

@end
