@class NSString, NSArray, NSDictionary;

@interface _MLTInferenceBundleTester : NSObject

@property (retain, nonatomic) NSString *errorString;
@property (retain, nonatomic) NSString *extractedBundleDirectory;
@property (retain, nonatomic) NSArray *extractedFiles;
@property (retain, nonatomic) NSDictionary *tests;
@property (nonatomic) long long computeUnit;
@property (nonatomic) unsigned long long testInBundle;
@property (nonatomic) unsigned long long failingTestsInBundle;

- (void)dealloc;
- (void).cxx_destruct;
- (void)deleteFiles:(id)a0;
- (void)runTest:(id)a0;
- (BOOL)cleanupAndReturnError:(struct archive { } *)a0 writerArchive:(struct archive { } *)a1 extractedFiles:(id)a2 error:(id *)a3;
- (BOOL)extractBundle:(id)a0 error:(id *)a1;
- (void)populateTestCases;
- (id)initWithBundleAtPath:(id)a0 computeUnit:(long long)a1 error:(id *)a2;
- (BOOL)runAllTestsInBundle:(id *)a0;
- (BOOL)runTestInBundle:(id)a0 error:(id *)a1;
- (id)errorIfAny;
- (id)errorForTest:(id)a0 error:(id *)a1;
- (id)testsInBundle;

@end
