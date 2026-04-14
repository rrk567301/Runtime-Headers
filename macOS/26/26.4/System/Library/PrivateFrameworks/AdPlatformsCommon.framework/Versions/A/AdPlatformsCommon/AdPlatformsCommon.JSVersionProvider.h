@class NSString;

@interface AdPlatformsCommon.JSVersionProvider : NSObject {
    void /* unknown type, empty encoding */ directoryURL;
}

@property (class, nonatomic, readonly) NSString *defaultVersion;

- (void).cxx_destruct;
- (id)initWithDirectoryURL:(id)a0;
- (id)init;
- (id)getJetPackVersion;

@end
