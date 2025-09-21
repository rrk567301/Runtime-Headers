@protocol CSUISetHandlerFlowDelegate, CSUIBoundBundleInfo;

@interface CSUISetHandlerFlow : NSObject <CSUIOpenWithMenuConstructorDelegate> {
    void /* unknown type, empty encoding */ mutableState;
    void /* unknown type, empty encoding */ bindable;
    void /* unknown type, empty encoding */ constructor;
}

@property (nonatomic, weak) id<CSUISetHandlerFlowDelegate> delegate;
@property (nonatomic, readonly) BOOL prepared;
@property (nonatomic, readonly) id<CSUIBoundBundleInfo> representativeBundle;

- (id)init;
- (BOOL)isPrepared;
- (void).cxx_destruct;
- (id)initWithBindable:(id)a0;
- (BOOL)prepareAndReturnError:(id *)a0;
- (void)openWithMenuFromConstructor:(id)a0 didSelectBoundBundle:(id)a1;

@end
