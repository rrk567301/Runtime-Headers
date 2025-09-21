@class NSArray;

@interface HDADSPUserClient : HDAUserClient {
    NSArray *_neverBypassModules;
    NSArray *_alwaysBypassModules;
    NSArray *_calibrationModules;
    NSArray *_compressorModules;
    NSArray *_linearModules;
    NSArray *_nonlinearModules;
}

+ (id)dspUserClientForDeviceType:(unsigned long long)a0;
+ (id)dspUserClientForExternalMicrophone;
+ (id)dspUserClientForHeadphones;
+ (id)dspUserClientForInternalMicrophone;
+ (id)dspUserClientForLineIn;
+ (id)dspUserClientForLineOut;
+ (id)dspUserClientForSPDIFIn;
+ (id)dspUserClientForSPDIFOut;
+ (id)dspUserClientForSpeakers;

- (void)dealloc;
- (int)UserClientScalarIScalarO:(unsigned int)a0 scalarICount:(unsigned int)a1 scalarOCount:(unsigned int)a2 scalarVargs:(void *)a3;
- (int)UserClientScalarIStructureO:(unsigned int)a0 scalarICount:(unsigned int)a1 structOSize:(unsigned long long *)a2 structO:(void *)a3 scalarVargs:(void *)a4;
- (id)currentDSPBypassStateWithError:(id *)a0;
- (char)disableDSPBypass:(unsigned long long)a0 withError:(id *)a1;
- (char)enableDSPBypass:(unsigned long long)a0 withError:(id *)a1;
- (char)getFunction:(unsigned long long)a0 bypass:(char *)a1 withError:(id *)a2;
- (char)getFunction:(unsigned long long)a0 coefficients:(void *)a1 atIndex:(unsigned int)a2 ofSize:(unsigned long long *)a3 withError:(id *)a4;
- (char)getFunction:(unsigned long long)a0 coefficients:(void *)a1 ofSize:(unsigned long long *)a2 withError:(id *)a3;
- (char)getFunction:(unsigned long long)a0 name:(char *)a1 ofSize:(unsigned long long *)a2 withError:(id *)a3;
- (char)getFunction:(unsigned long long)a0 numberOfParameter:(unsigned long long *)a1 withError:(id *)a2;
- (char)getFunction:(unsigned long long)a0 parameter:(unsigned long long)a1 value:(unsigned long long *)a2 withError:(id *)a3;
- (char)getNumberOfInstantiatedFunctions:(unsigned long long *)a0 withError:(id *)a1;
- (char)getOutputMuteForChannel1:(char *)a0 channel2:(char *)a1 channel3:(char *)a2 channel4:(char *)a3 channel5:(char *)a4 channel6:(char *)a5 withError:(id *)a6;
- (id)initWithService:(unsigned int)a0 andClientType:(unsigned int)a1;
- (char)restoreFromDSPBypassState:(id)a0 withError:(id *)a1;
- (char)setFunction:(unsigned long long)a0 bypass:(char)a1 withError:(id *)a2;
- (char)setFunction:(unsigned long long)a0 parameter:(unsigned long long)a1 toValue:(unsigned long long)a2 withError:(id *)a3;
- (char)setOutputMuteForChannel1:(char)a0 channel2:(char)a1 channel3:(char)a2 channel4:(char)a3 channel5:(char)a4 channel6:(char)a5 withError:(id *)a6;

@end
