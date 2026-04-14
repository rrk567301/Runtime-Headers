@class NSString, NSDictionary, NSMutableArray;

@interface TTKFileSink : NSObject <TTKTestCaseSink> {
    NSString *_fileName;
    NSString *_inputMode;
    NSDictionary *_layouts;
    NSMutableArray *_testCases;
    int _testCaseIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void).cxx_destruct;
- (void)flush;
- (id)init:(id)a0 inputMode:(id)a1 layouts:(id)a2;
- (void)addLayouts:(id)a0;
- (void)pushNextTestCase:(id)a0;
- (id)generateLayouts;
- (id)generateTestCases;
- (id)generateData;

@end
