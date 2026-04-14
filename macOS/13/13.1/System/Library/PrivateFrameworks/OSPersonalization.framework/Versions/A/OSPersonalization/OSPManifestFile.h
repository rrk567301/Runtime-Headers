@interface OSPManifestFile : NSObject

+ (id)personalizedManifestPathForFile:(id)a0 device:(id)a1;
+ (id)globalSignedManifestPathForFile:(id)a0 device:(id)a1;
+ (id)globalSignedManifestPathForFile:(id)a0 device:(id)a1 variant:(id)a2;
+ (id)personalizedSplatManifestPathForDevice:(id)a0;
+ (id)globalSignedSplatManifestPathForDevice:(id)a0 variant:(id)a1;

@end
