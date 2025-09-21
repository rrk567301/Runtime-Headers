@interface VisualLookUp.CancelSession : NSObject <VIQueryHandling> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ _isCanceled;
    void /* unknown type, empty encoding */ onCancels;
    void /* unknown type, empty encoding */ lock;
}

- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
