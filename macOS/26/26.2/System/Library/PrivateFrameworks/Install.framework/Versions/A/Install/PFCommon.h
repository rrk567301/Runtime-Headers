@class PFModule;

@interface PFCommon : NSObject <PFMeta, PFFileEnumerator> {
    PFModule *_module;
}

+ (id)allPackageFileTypes;
+ (BOOL)fileTypeIsSupported:(id)a0;

- (id)groups;
- (id)identifier;
- (id)title;
- (BOOL)validateContents:(id *)a0;
- (id)information;
- (id)name;
- (id)version;
- (id)location;
- (void)skipDescendents;
- (id)init;
- (id)dependencies;
- (void)dealloc;
- (id)moduleType;
- (void)releaseFileData;
- (id)validatedDigest;
- (char *)_resolvedFSPathForBomPath:(const char *)a0;
- (id)catalogInfo;
- (id)certificateIdentity;
- (id)digestOfType:(id)a0;
- (struct _BOMFSObject { } *)fileAtPath:(const char *)a0;
- (BOOL)initFileEnumerator;
- (id)installPlan;
- (struct _BOMFSObject { } *)nextFile;
- (id)objectForKey:(id)a0 localization:(id)a1;
- (id)packageFileTypes;
- (void)resetFileEnumerator;
- (id)searchDefinitions;
- (id)taints;

@end
