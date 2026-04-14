@class NSString;

@interface BuildVersion : NSObject {
    unsigned int _buildID;
    NSString *_buildVersion;
    NSString *_majorBuildVersion;
    int _updaterID;
    NSString *_revisionBuildVersion;
    NSString *_buildNumber;
}

- (long long)compare:(id)a0;
- (id)buildVersion;
- (id)description;
- (void)dealloc;
- (unsigned int)buildID;
- (id)initWithBuildID:(unsigned int)a0;
- (id)initWithBuildVersion:(id)a0;
- (BOOL)parseBuildVersion;
- (id)userVisibleString;

@end
