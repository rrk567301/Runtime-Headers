@class NSString;

@interface BuildVersion : NSObject {
    unsigned int _buildID;
    NSString *_buildVersion;
    NSString *_majorBuildVersion;
    int _updaterID;
    NSString *_revisionBuildVersion;
    NSString *_buildNumber;
}

- (id)buildVersion;
- (void)dealloc;
- (long long)compare:(id)a0;
- (id)description;
- (unsigned int)buildID;
- (id)initWithBuildID:(unsigned int)a0;
- (id)initWithBuildVersion:(id)a0;
- (BOOL)parseBuildVersion;
- (id)userVisibleString;

@end
