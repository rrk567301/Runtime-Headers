@protocol CSUIBoundBundleInfo;

@interface CSUIOpenWithPreparedMenu : NSObject {
    void /* unknown type, empty encoding */ boundBundles;
    void /* unknown type, empty encoding */ representativeBundleIndex;
}

@property (nonatomic, readonly) id<CSUIBoundBundleInfo> representativeBundle;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBoundBundlesWrapper:(id)a0;

@end
