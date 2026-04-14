@interface VisualLookUp.CancelSession : NSObject <VIQueryHandling> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ _isCanceled;
    void /* unknown type, empty encoding */ onCancels;
    void /* unknown type, empty encoding */ lock;
}

- (void)cancel;
- (void).cxx_destruct;
- (id)init;

@end
