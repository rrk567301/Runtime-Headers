@class NSMutableArray, ATCRTAPHardwareID;

@interface AppleTypeCRetimerUARPUpdaterController : AppleTypeCRetimerUpdaterHelper <AppleTypeCRetimerUARPUpdaterInstanceDelegate> {
    NSMutableArray *_updaterInstances;
    char _skipSameVersion;
    ATCRTAPHardwareID *_apHardwareID;
    unsigned long long _debugFlags;
}

@property (readonly) char isDone;

- (void).cxx_destruct;
- (char)performReset;
- (id)queryInfo;
- (char)initDebugFlags:(id)a0;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2 forcingPower:(char)a3;
- (char)initializeUpdaterInstancesForcingPower:(char)a0;
- (char)performUpdateWithDictionary:(id)a0;

@end
