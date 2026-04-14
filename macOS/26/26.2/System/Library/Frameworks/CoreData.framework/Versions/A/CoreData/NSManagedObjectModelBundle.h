@class NSDictionary, NSBundle;

@interface NSManagedObjectModelBundle : NSObject {
    NSBundle *_bundle;
    NSDictionary *_versionInfoDictionary;
}

- (id)urlForModelVersionWithName:(id)a0;
- (id)currentVersion;
- (id)_modelForVersionHashes:(id)a0 inStyle:(unsigned long long)a1;
- (id)_modelForVersionHashes:(id)a0;
- (id)modelVersions;
- (id)initWithPath:(id)a0;
- (id)optimizedVersionURL;
- (id)currentVersionURL;
- (id)versionChecksums;
- (void)dealloc;

@end
