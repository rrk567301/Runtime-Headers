@class NSString, NSMutableDictionary;

@interface ILMBPMRContextImpl : NSObject {
    NSMutableDictionary *mInstruments;
    NSString *mAppName;
    NSString *mLogPath;
    NSString *mDefaultInstrumentType;
}

- (id)applicationName;
- (void)setParameters:(id)a0;
- (id)logPath;
- (id)init;
- (void)dealloc;
- (void)deleteInstruments;
- (void)getParametersFromApplication;
- (struct ILMBPMRInstrument { void /* function */ **x0; struct __CFString *x1; } *)instrument:(id)a0;

@end
