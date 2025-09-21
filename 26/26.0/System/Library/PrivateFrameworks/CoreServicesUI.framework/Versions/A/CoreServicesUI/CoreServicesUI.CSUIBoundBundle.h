@class NSURL, NSString;

@interface CoreServicesUI.CSUIBoundBundle : NSObject <CSUIBoundBundleInfo> {
    void /* unknown type, empty encoding */ boundBundleInfo;
}

@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleVersionString;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
