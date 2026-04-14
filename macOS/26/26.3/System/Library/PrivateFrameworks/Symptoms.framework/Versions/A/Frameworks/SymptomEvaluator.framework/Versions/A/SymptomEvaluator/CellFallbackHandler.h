@class NSString;

@interface CellFallbackHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol, ManagedEventInfoProtocol>

@property (readonly) BOOL rnfActivated;
@property (readonly) BOOL rnfAskedOutrank;
@property (readonly) BOOL wifiCallUnderway;
@property (readonly) long long fallbackAdvice;
@property (readonly) BOOL adminDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (float)appPolicyDenialsScore;
+ (id)internalStateDictionary;
+ (id)configureClass:(id)a0;

- (BOOL)noteSymptom:(id)a0;
- (int)configureInstance:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (void)postUpwards:(long long)a0;
- (void)postMotionDetector:(unsigned int)a0;
- (void)generateInfoForId:(unsigned long long)a0 context:(const char *)a1 uuid:(id)a2 completionBlock:(id /* block */)a3;
- (id)internalStateDictionary;
- (void)postHasAdviceNotification:(BOOL)a0;
- (void)postUpwards:(long long)a0 appsWithStates:(id)a1 always:(BOOL)a2;

@end
