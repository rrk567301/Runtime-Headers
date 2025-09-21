@class PKReceipt;

@interface PFPKReceipt : PFPackage {
    PKReceipt *_receipt;
}

+ (id)moduleName;
+ (id)packageFileTypes;
+ (id)receiptModuleForIdentifier:(id)a0 withObject:(id)a1 onVolumeOrHomeDir:(id)a2 error:(id *)a3;

- (id)identifier;
- (void)dealloc;
- (int)capabilities;
- (id)version;
- (id)path;
- (id)title;
- (id)name;
- (id)location;
- (id)initWithReceipt:(id)a0;

@end
