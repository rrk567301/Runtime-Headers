@class NSMutableArray, ATCRTAPHardwareID;

@interface AppleTypeCRetimerUpdateController : AppleTypeCRetimerUpdaterHelper {
    char _singleStepMode;
    unsigned long long _updaterIndex;
    NSMutableArray *_updaterInstances;
    char _aggregateUpdateComplete;
    char _skipSameVersion;
    ATCRTAPHardwareID *_apHardwareID;
    unsigned long long _debugFlags;
}

@property (readonly) char isDone;

- (void).cxx_destruct;
- (void)performReset;
- (id)queryInfo;
- (char)isDoneAggregate;
- (char)initDebugFlags:(id)a0;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2 forcingPower:(char)a3;
- (char)initializeUpdaterInstancesForcingPower:(char)a0;
- (char)isDoneSingleStep;
- (char)performUpdateWithDictionary:(id)a0;
- (char)performUpdateWithDictionaryAggregate:(id)a0;
- (char)performUpdateWithDictionarySingleStep:(id)a0;
- (id)queryInfoAggregate;
- (id)queryInfoSingleStep;
- (char)shouldSkipSameVersion:(id)a0;

@end
