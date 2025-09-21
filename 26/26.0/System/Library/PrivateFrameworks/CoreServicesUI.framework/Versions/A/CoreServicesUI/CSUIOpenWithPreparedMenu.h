@protocol CSUIBoundBundleInfo;

@interface CSUIOpenWithPreparedMenu : NSObject {
    void /* unknown type, empty encoding */ boundBundles;
    void /* unknown type, empty encoding */ representativeBundleIndex;
}

@property (nonatomic, readonly) id<CSUIBoundBundleInfo> representativeBundle;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBoundBundlesWrapper:(id)a0;

@end
