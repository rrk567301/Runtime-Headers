@class NSString, NSMutableDictionary;

@interface MLPMRContextImpl : NSObject {
    NSMutableDictionary *mInstruments;
    NSString *mAppName;
    NSString *mLogPath;
    NSString *mDefaultInstrumentType;
}

- (void)dealloc;
- (id)init;
- (id)applicationName;
- (void)setParameters:(id)a0;
- (struct MLPMRInstrument { void /* function */ **x0; struct __CFString *x1; } *)instrument:(id)a0;
- (id)logPath;
- (void)deleteInstruments;
- (void)getParametersFromApplication;

@end
