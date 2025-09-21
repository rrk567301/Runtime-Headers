@class NSError;

@interface MISAppDeniedAlert : NSObject {
    void /* unknown type, empty encoding */ bundleIdentifier;
    void /* unknown type, empty encoding */ appName;
    void /* unknown type, empty encoding */ isForAppMarketplace;
    void /* unknown type, empty encoding */ updateMetadata;
}

- (id)initWithBundleIdentifier:(id)a0;
- (id)init;
- (id)cancelButtonText;
- (id)description;
- (id)title;
- (BOOL)isUpdateAvailable;
- (id)learnMoreURL;
- (void).cxx_destruct;
- (id)deleteAppButtonText;
- (void)deleteAppHandler;
- (void)deleteAppHandlerWithCompletionHandler:(void (^)(unsigned long long, NSError *))a0;
- (void)fetchUpdateMetadataWithCompletionHandler:(void (^)(NSError *))a0;
- (id)learnMoreButtonText;
- (id)updateAppButtonText;
- (void)updateAppHandler;
- (void)updateAppHandlerWithCompletionHandler:(void (^)(NSError *))a0;

@end
