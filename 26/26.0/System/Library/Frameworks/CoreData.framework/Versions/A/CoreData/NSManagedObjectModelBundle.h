@class NSDictionary, NSBundle;

@interface NSManagedObjectModelBundle : NSObject {
    NSBundle *_bundle;
    NSDictionary *_versionInfoDictionary;
}

- (id)initWithPath:(id)a0;
- (id)currentVersion;
- (void)dealloc;
- (id)versionChecksums;
- (id)urlForModelVersionWithName:(id)a0;
- (id)modelVersions;
- (id)_modelForVersionHashes:(id)a0;
- (id)_modelForVersionHashes:(id)a0 inStyle:(unsigned long long)a1;
- (id)optimizedVersionURL;
- (id)currentVersionURL;

@end
