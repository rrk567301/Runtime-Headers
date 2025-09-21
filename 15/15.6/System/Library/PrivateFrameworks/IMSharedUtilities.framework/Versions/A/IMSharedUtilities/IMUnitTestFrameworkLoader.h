@class IMUnitTestBundleLoader, IMUnitTestLogger;

@interface IMUnitTestFrameworkLoader : NSObject

@property char xctestFrameworkLoaded;
@property (readonly, nonatomic) IMUnitTestBundleLoader *bundleLoader;
@property (readonly) IMUnitTestLogger *logger;

- (void).cxx_destruct;
- (char)findFrameworkPathsWithFrameworkNames:(id)a0 searchPaths:(id)a1 outFrameworkPaths:(id *)a2 error:(id *)a3;
- (char)frameworkExistsAtPath:(id)a0;
- (id)frameworkSearchPaths;
- (id)initWithLogger:(id)a0 bundleLoader:(id)a1;
- (char)loadFrameworkNamesFromTextFile:(id)a0 outNames:(id *)a1 error:(id *)a2;
- (char)loadFrameworks:(id)a0 outError:(id *)a1;
- (char)loadTestFrameworks:(id *)a0;
- (char)loadXCTestFramework:(id *)a0;
- (char)loadXCTestFrameworkFromSDK:(id *)a0;
- (char)readXCTestFrameworkDependencies:(id *)a0 error:(id *)a1;

@end
