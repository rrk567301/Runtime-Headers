@class PKReceipt;

@interface PFPKReceipt : PFPackage {
    PKReceipt *_receipt;
}

+ (id)moduleName;
+ (id)packageFileTypes;
+ (id)receiptModuleForIdentifier:(id)a0 withObject:(id)a1 onVolumeOrHomeDir:(id)a2 error:(id *)a3;

- (id)name;
- (id)path;
- (id)location;
- (id)title;
- (int)capabilities;
- (id)version;
- (id)identifier;
- (void)dealloc;
- (id)initWithReceipt:(id)a0;

@end
