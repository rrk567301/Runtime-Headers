@class NSString, NSDictionary, NSArray, OSPDevice;

@interface OSPBuildIdentity : NSObject

@property (retain) NSDictionary *manifest;
@property (retain) NSString *variant;
@property (retain) OSPDevice *device;
@property (retain) NSString *restoreVersion;
@property (retain) NSArray *entries;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)_safeStringForKey:(id)a0 inDictionary:(id)a1;
- (id)additionalManifestPathForEntry:(id)a0;
- (id)_infoDictForEntry:(id)a0;
- (id)entriesOfType:(long long)a0;
- (id)relativePathForEntry:(id)a0;

@end
