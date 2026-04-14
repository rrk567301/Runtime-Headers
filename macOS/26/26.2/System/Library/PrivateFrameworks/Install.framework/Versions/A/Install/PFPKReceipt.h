@class PKReceipt;

@interface PFPKReceipt : PFPackage {
    PKReceipt *_receipt;
}

+ (id)moduleName;
+ (id)packageFileTypes;
+ (id)receiptModuleForIdentifier:(id)a0 withObject:(id)a1 onVolumeOrHomeDir:(id)a2 error:(id *)a3;

- (id)identifier;
- (id)title;
- (int)capabilities;
- (id)name;
- (id)version;
- (id)location;
- (id)path;
- (void)dealloc;
- (id)initWithReceipt:(id)a0;

@end
