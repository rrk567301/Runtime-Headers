@class NSString, NSMutableDictionary;

@interface ILMBPMRContextImpl : NSObject {
    NSMutableDictionary *mInstruments;
    NSString *mAppName;
    NSString *mLogPath;
    NSString *mDefaultInstrumentType;
}

- (void)setParameters:(id)a0;
- (id)init;
- (id)logPath;
- (void)dealloc;
- (id)applicationName;
- (void)deleteInstruments;
- (void)getParametersFromApplication;
- (struct ILMBPMRInstrument { void /* function */ **x0; struct __CFString *x1; } *)instrument:(id)a0;

@end
