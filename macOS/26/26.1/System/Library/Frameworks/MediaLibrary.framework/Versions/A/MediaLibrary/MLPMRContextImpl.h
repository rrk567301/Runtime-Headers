@class NSString, NSMutableDictionary;

@interface MLPMRContextImpl : NSObject {
    NSMutableDictionary *mInstruments;
    NSString *mAppName;
    NSString *mLogPath;
    NSString *mDefaultInstrumentType;
}

- (id)logPath;
- (void)setParameters:(id)a0;
- (void)dealloc;
- (id)applicationName;
- (id)init;
- (void)deleteInstruments;
- (void)getParametersFromApplication;
- (struct MLPMRInstrument { void /* function */ **x0; struct __CFString *x1; } *)instrument:(id)a0;

@end
