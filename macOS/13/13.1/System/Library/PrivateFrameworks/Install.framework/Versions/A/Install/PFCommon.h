@class PFModule;

@interface PFCommon : NSObject <PFMeta, PFFileEnumerator> {
    PFModule *_module;
}

+ (id)allPackageFileTypes;
+ (BOOL)fileTypeIsSupported:(id)a0;

- (void)dealloc;
- (id)name;
- (id)init;
- (id)identifier;
- (id)version;
- (id)groups;
- (id)location;
- (void)skipDescendents;
- (id)dependencies;
- (id)title;
- (id)information;
- (id)moduleType;
- (BOOL)validateContents:(id *)a0;
- (id)certificateIdentity;
- (id)packageFileTypes;
- (id)objectForKey:(id)a0 localization:(id)a1;
- (id)installPlan;
- (id)searchDefinitions;
- (id)digestOfType:(id)a0;
- (id)taints;
- (BOOL)initFileEnumerator;
- (struct _BOMFSObject { } *)nextFile;
- (struct _BOMFSObject { } *)fileAtPath:(const char *)a0;
- (void)resetFileEnumerator;
- (void)releaseFileData;
- (id)catalogInfo;
- (char *)_resolvedFSPathForBomPath:(const char *)a0;

@end
