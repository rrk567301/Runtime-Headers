@class NSString;

@interface CellFallbackHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol, ManagedEventInfoProtocol>

@property (readonly) char rnfActivated;
@property (readonly) char wifiCallUnderway;
@property (readonly) long long fallbackAdvice;
@property (readonly) char adminDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)internalStateDictionary;
+ (id)configureClass:(id)a0;
+ (float)appPolicyDenialsScore;

- (id)internalStateDictionary;
- (int)configureInstance:(id)a0;
- (void)generateInfoForId:(unsigned long long)a0 context:(const char *)a1 uuid:(id)a2 completionBlock:(id /* block */)a3;
- (BOOL)noteSymptom:(id)a0;
- (void)postHasAdviceNotification:(char)a0;
- (void)postMotionDetector:(unsigned int)a0;
- (void)postUpwards:(long long)a0;
- (void)postUpwards:(long long)a0 appsWithStates:(id)a1 always:(char)a2;
- (int)read:(id)a0 returnedValues:(id)a1;

@end
