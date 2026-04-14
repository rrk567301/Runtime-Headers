@class NSMutableArray, APHardwareID;

@interface AppleTypeCRetimerUpdateController : AppleTypeCRetimerUpdaterHelper {
    BOOL _singleStepMode;
    unsigned long long _updaterIndex;
    NSMutableArray *_updaterInstances;
    BOOL _aggregateUpdateComplete;
    BOOL _skipSameVersion;
    APHardwareID *_apHardwareID;
    unsigned long long _debugFlags;
}

@property (readonly) BOOL isDone;

- (void).cxx_destruct;
- (BOOL)initializeUpdaterInstancesForcingPower:(BOOL)a0;
- (BOOL)initDebugFlags:(id)a0;
- (BOOL)shouldSkipSameVersion:(id)a0;
- (id)queryInfoSingleStep;
- (id)queryInfoAggregate;
- (BOOL)performUpdateWithDictionarySingleStep:(id)a0;
- (BOOL)performUpdateWithDictionaryAggregate:(id)a0;
- (BOOL)isDoneSingleStep;
- (BOOL)isDoneAggregate;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2 forcingPower:(BOOL)a3;
- (id)queryInfo;
- (BOOL)performUpdateWithDictionary:(id)a0;

@end
