@class NSString, NSURL;

@interface SKGConfig : NSObject {
    NSString *_resourcePath;
    NSURL *_configURL;
    long long _currentResourceVersion;
    long long _currentReleaseVersion;
}

@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) long long resourceVersion;
@property (readonly, nonatomic) long long releaseVersion;

- (void)updateConfig;
- (void).cxx_destruct;
- (void)readConfig;
- (id)initWithConfigPath:(id)a0;
- (id)initWithConfigPath:(id)a0 resourceDirectoryPath:(id)a1 resourceVersion:(long long)a2;

@end
