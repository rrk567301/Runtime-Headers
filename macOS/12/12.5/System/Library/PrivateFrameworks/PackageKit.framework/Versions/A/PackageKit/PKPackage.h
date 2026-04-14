@class NSString, NSDictionary, PKArchive, NSURL, NSArray, PKPackageInfo;

@interface PKPackage : NSObject <NSCoding, NSCopying> {
    NSURL *_url;
    NSDictionary *_options;
    PKArchive *_archive;
    PKPackageInfo *_packageInfo;
    NSDictionary *_componentMap;
    NSArray *_firmwareBundleComponents;
    BOOL _populatedSubpaths;
}

@property (readonly) PKPackageInfo *packageInfo;
@property (readonly) NSString *packageIdentifier;
@property (readonly) NSString *packageVersion;
@property (readonly) NSString *scriptsSubpath;
@property (readonly) PKArchive *archive;
@property (readonly) NSURL *fileURL;

+ (BOOL)canInitWithURL:(id)a0;
+ (id)packageWithPath:(id)a0;
+ (id)packageWithURL:(id)a0;
+ (id)packageWithPath:(id)a0 options:(id)a1;
+ (id)packageWithURL:(id)a0 options:(id)a1;
+ (id)_allPackageClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)components;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)payloadExtractorWithDestination:(id)a0 externalRoot:(id)a1 error:(id *)a2;
- (id)componentForIdentifier:(id)a0;
- (id)firmwareComponentsOfType:(long long)a0;
- (id)directoryEnumerator;
- (id)_scriptsDirectory;
- (id)BOMData;
- (id)_staticObsoleteFiles;
- (id)_staticObsoleteDirectories;
- (id)_staticObsoleteFilesOrRecursiveDirectories;
- (BOOL)_payloadLargeAndSegmented;
- (id)scriptsExtractorWithDestination:(id)a0 error:(id *)a1;
- (id)_componentMap;
- (void)_populateComponentSubpaths;
- (void)_addBinarySubpath:(id)a0 toSubpathsDictionary:(id)a1 fileAttributes:(id)a2;
- (id)subpathsForComponent:(id)a0;
- (id)binarySubpathsForComponent:(id)a0 forArch:(int)a1 forSubArch:(int)a2;
- (id)firmwareComponents;
- (BOOL)extractFilesForBundleComponent:(id)a0 toPath:(id)a1 error:(id *)a2;
- (void)enumerateBundleComponentsUsingBlock:(id /* block */)a0;

@end
