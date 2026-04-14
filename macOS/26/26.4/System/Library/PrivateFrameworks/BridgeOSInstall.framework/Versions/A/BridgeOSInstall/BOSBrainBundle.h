@class NSString, NSBundle, BOSBundleComponentVersion;

@interface BOSBrainBundle : NSObject

@property (retain) NSBundle *bundle;
@property (retain) BOSBundleComponentVersion *bundleVersion;
@property (retain) NSString *bundleIdentifier;
@property (readonly) NSString *payloadArchivePath;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBundleURL:(id)a0;

@end
