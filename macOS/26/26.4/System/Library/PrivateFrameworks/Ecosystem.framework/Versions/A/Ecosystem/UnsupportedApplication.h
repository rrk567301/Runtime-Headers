@class NSString, NSURL, NSDate;

@interface UnsupportedApplication : NSObject {
    void /* function */ bundleDisplayableName;
    void /* function */ bundlePath;
    void /* function */ bundleID;
    void /* function */ bundleDeveloper;
    void /* unknown type, empty encoding */ lastOpenedDate;
    void /* unknown type, empty encoding */ websiteURL;
}

@property (nonatomic, readonly) NSString *bundleDisplayableName;
@property (nonatomic, readonly) NSString *bundlePath;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *bundleDeveloper;
@property (nonatomic, readonly) BOOL hasAdditionalComponents;
@property (nonatomic, readonly) NSDate *lastOpenedDate;
@property (nonatomic, readonly) NSURL *websiteURL;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBundleDisplayableName:(id)a0 bundlePath:(id)a1 bundleID:(id)a2 bundleDeveloper:(id)a3 hasAdditionalComponents:(BOOL)a4 lastOpenedDate:(id)a5 websiteURL:(id)a6;

@end
