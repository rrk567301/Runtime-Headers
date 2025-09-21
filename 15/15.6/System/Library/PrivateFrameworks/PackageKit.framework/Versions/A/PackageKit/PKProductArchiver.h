@class NSDictionary, PKDistribution, NSString;

@interface PKProductArchiver : NSObject {
    NSString *_productPath;
    id /* block */ _baselineNameMapper;
    id /* block */ _writeActionHandler;
}

@property (retain) NSDictionary *options;
@property char copyOwnershipFromOriginalBom;
@property (retain) PKDistribution *overrideDistribution;
@property (copy) NSString *baselineUnarchivedProduct;
@property char disableBinaryPatches;
@property (retain) NSString *archiverClientVersion;

- (void)dealloc;
- (char)_writePackageAtPath:(id)a0 toArchive:(id)a1 atPath:(id)a2 outPackage:(id *)a3 error:(id *)a4;
- (char)_writeScriptsAtPath:(id)a0 toArchive:(id)a1 atPath:(id)a2 error:(id *)a3;
- (id)initWithUnarchivedProduct:(id)a0;
- (void)setMapBaselineNamesUsingBlock:(id /* block */)a0;
- (void)setWriteActionHandler:(id /* block */)a0;
- (char)writeToArchive:(id)a0 error:(id *)a1;

@end
