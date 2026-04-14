@class NSString;

@interface AdPlatformsCommon.JSVersionProvider : NSObject {
    void /* unknown type, empty encoding */ directoryURL;
}

@property (class, nonatomic, readonly) NSString *defaultVersion;

- (id)initWithDirectoryURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)getJetPackVersion;

@end
