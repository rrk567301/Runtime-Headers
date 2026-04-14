@class PKReceipt;

@interface PFPKReceipt : PFPackage {
    PKReceipt *_receipt;
}

+ (id)moduleName;
+ (id)packageFileTypes;
+ (id)receiptModuleForIdentifier:(id)a0 withObject:(id)a1 onVolumeOrHomeDir:(id)a2 error:(id *)a3;

- (id)identifier;
- (int)capabilities;
- (id)location;
- (id)path;
- (id)name;
- (id)title;
- (void)dealloc;
- (id)version;
- (id)initWithReceipt:(id)a0;

@end
