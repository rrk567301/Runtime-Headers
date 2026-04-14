@class NSString, NSArray;

@interface swift_DaemonRecord : NSObject {
    void /* function */ bundleIdentifier;
    void /* unknown type, empty encoding */ attributionBundleIdentifier;
    void /* unknown type, empty encoding */ metadataURLs;
}

@property (class, nonatomic, readonly) NSString *daemonFilePath;
@property (class, nonatomic, copy) NSArray *enumerated;

@property (nonatomic, copy) NSString *bundleIdentifier;

+ (id)fromBundleIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
