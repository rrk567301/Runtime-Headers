@class NSArray, NSString, NSMutableArray;

@interface TIDPReporterMock : NSObject <TIDPReportingDelegate> {
    NSMutableArray *_recordsWritten;
}

@property (readonly, nonatomic) NSArray *recordsWritten;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)recordNumbersVectors:(id)a0 metadata:(id)a1;
- (void)reset;
- (BOOL)record:(id)a0;
- (id)init;
- (BOOL)record:(id)a0 metadata:(id)a1;
- (void).cxx_destruct;
- (BOOL)recordTokenFrequency:(id)a0 withLocale:(id)a1 withTokenType:(id)a2;

@end
