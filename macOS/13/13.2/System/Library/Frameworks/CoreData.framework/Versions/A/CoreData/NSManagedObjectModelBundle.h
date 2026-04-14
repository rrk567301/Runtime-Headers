@class NSDictionary, NSBundle;

@interface NSManagedObjectModelBundle : NSObject {
    NSBundle *_bundle;
    NSDictionary *_versionInfoDictionary;
}

- (void)dealloc;
- (id)initWithPath:(id)a0;
- (id)currentVersion;
- (id)_modelForVersionHashes:(id)a0;
- (id)modelVersions;
- (id)urlForModelVersionWithName:(id)a0;
- (id)currentVersionURL;
- (id)optimizedVersionURL;
- (id)_modelForVersionHashes:(id)a0 inStyle:(unsigned long long)a1;

@end
