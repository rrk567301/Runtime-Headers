@class NSString, TSTTableInfo;

@interface TNFormBasedSheet : TNSheet

@property (retain, nonatomic) NSString *importedTargetName;
@property (retain, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) BOOL hasValidTableInfoForViewingForm;
@property (readonly, nonatomic) BOOL hasValidTableInfoForBuildingForm;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } tableUID;

- (void).cxx_destruct;
- (double)contentScale;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)isForm;
- (BOOL)shouldBeDisplayed;
- (BOOL)isPrintable;
- (void)clearTableInfoCache;
- (id)initWithContext:(id)a0 importedTargetName:(id)a1;
- (void)resolveImportedTargetNameInDocumentRoot:(id)a0;

@end
