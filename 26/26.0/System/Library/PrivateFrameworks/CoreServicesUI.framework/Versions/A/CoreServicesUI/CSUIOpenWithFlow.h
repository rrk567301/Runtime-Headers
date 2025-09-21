@protocol CSUIOpenWithFlowDelegate, CSUIBoundBundleInfo;

@interface CSUIOpenWithFlow : NSObject <CSUIOpenWithMenuConstructorDelegate> {
    void /* unknown type, empty encoding */ bindable;
    void /* unknown type, empty encoding */ constructor;
    void /* unknown type, empty encoding */ mutableState;
}

@property (nonatomic, weak) id<CSUIOpenWithFlowDelegate> delegate;
@property (nonatomic, readonly) BOOL prepared;
@property (nonatomic, readonly) id<CSUIBoundBundleInfo> representativeBundle;

- (id)init;
- (BOOL)isPrepared;
- (void).cxx_destruct;
- (id)initWithBindable:(id)a0;
- (BOOL)prepareAndReturnError:(id *)a0;
- (void)openWithMenuFromConstructor:(id)a0 didSelectBoundBundle:(id)a1;
- (void)openWithMenuFromConstructorDidSelectAppStoreItem:(id)a0;

@end
