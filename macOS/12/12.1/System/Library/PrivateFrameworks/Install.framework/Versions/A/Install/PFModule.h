@class NSURL, NSDictionary, NSMutableDictionary;

@interface PFModule : NSObject <PFMeta, PFFileEnumerator, PFActionSupport, PFPayloadSupport, PFReceiptSupport, PFModuleSupport> {
    NSURL *_packageLocation;
    NSDictionary *_meta;
    NSMutableDictionary *_catalogInfo;
}

+ (id)moduleName;
+ (id)packageFileTypes;
+ (id)receiptIdentifiersForVolume:(id)a0;
+ (id)receiptModuleForIdentifier:(id)a0 withObject:(id)a1 onVolumeOrHomeDir:(id)a2 error:(id *)a3;
+ (BOOL)receiptExistsForIdentifier:(id)a0 withObject:(id)a1 onVolumeOrHomeDir:(id)a2;

- (void)dealloc;
- (id)name;
- (id)identifier;
- (id)path;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)infoDictionary;
- (id)version;
- (id)location;
- (id)groups;
- (void)skipDescendents;
- (id)dependencies;
- (id)title;
- (void)setInfoDictionary:(id)a0;
- (int)capabilities;
- (id)information;
- (BOOL)validateContents:(id *)a0;
- (id)certificateIdentity;
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
- (BOOL)hasAction:(id)a0;
- (id)taskForExtractionWithPlan:(id)a0 toDirectory:(id)a1;
- (id)taskForAction:(id)a0 withContextDictionary:(id)a1;
- (id)catalogInfo;
- (id)runAction:(id)a0 withContextDictionary:(id)a1 localization:(id)a2;
- (id)taskForExtraction:(id)a0;
- (id)taskForExtraction:(struct __CFArray { } *)a0 toDirectory:(id)a1;
- (int)extractPayloadToDirectory:(id)a0;
- (int)extractPayloadFiles:(struct __CFArray { } *)a0 toDirectory:(id)a1;
- (int)extractPayloadWithPlan:(id)a0 toDirectory:(id)a1;
- (id)taskToCreateReceipt:(id)a0 withPlan:(id)a1;
- (id)createReceipt:(id)a0 withPlan:(id)a1;
- (void)setCatalogInfo:(id)a0;

@end
