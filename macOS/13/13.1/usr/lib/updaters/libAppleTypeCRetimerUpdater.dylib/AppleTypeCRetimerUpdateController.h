@class NSMutableArray, ATCRTAPHardwareID;

@interface AppleTypeCRetimerUpdateController : AppleTypeCRetimerUpdaterHelper {
    BOOL _singleStepMode;
    unsigned long long _updaterIndex;
    NSMutableArray *_updaterInstances;
    BOOL _aggregateUpdateComplete;
    BOOL _skipSameVersion;
    ATCRTAPHardwareID *_apHardwareID;
    unsigned long long _debugFlags;
}

@property (readonly) BOOL isDone;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2 forcingPower:(BOOL)a3;
- (BOOL)initializeUpdaterInstancesForcingPower:(BOOL)a0;
- (id)queryInfoSingleStep;
- (id)queryInfoAggregate;
- (id)queryInfo;
- (BOOL)shouldSkipSameVersion:(id)a0;
- (BOOL)initDebugFlags:(id)a0;
- (BOOL)performUpdateWithDictionaryAggregate:(id)a0;
- (BOOL)performUpdateWithDictionarySingleStep:(id)a0;
- (BOOL)performUpdateWithDictionary:(id)a0;
- (BOOL)isDoneSingleStep;
- (BOOL)isDoneAggregate;

@end
