@class NSArray, TRIAllocationStatusDefaultProvider, NSString;

@interface TRIActiveExperimentsSysdiagnoseProvider : NSObject <TRISysdiagnoseInfoProviding> {
    TRIAllocationStatusDefaultProvider *_statusProvider;
    NSArray *_environments;
    NSString *_filename;
}

+ (BOOL)_isFactorRecordFileType:(id)a0;

- (id)filename;
- (void).cxx_destruct;
- (id)initWithAllocationStatusProvider:(id)a0 outputFilename:(id)a1 environments:(id)a2;
- (id)sysdiagnoseLinesWithError:(id *)a0;

@end
