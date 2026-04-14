@class NSURL, NSNumber, NSDate;

@interface XProtectUpdateBundle : NSObject {
    NSURL *_resourcesURL;
    NSNumber *_forcedRulesPresent;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSNumber *version;
@property (readonly, nonatomic) NSDate *installationDate;
@property (readonly, nonatomic) BOOL anyForcedRulesPresent;

- (id)init;
- (id)description;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)getResource:(id)a0;
- (id)getResourcesOfType:(unsigned long long)a0;
- (id)supplementalYARAFilesInDirectory:(id)a0;

@end
