@class NSString, NSNumber;

@interface WFRunActionEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *shortcutSource;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *externalBundleIdentifier;
@property (copy, nonatomic) NSString *externalActionIdentifier;
@property (nonatomic) BOOL completed;
@property (nonatomic) BOOL didRunRemotely;
@property (copy, nonatomic) NSString *automationType;
@property (nonatomic) BOOL isInvalidatedSystemAction;
@property (copy, nonatomic) NSString *galleryIdentifier;
@property (copy, nonatomic) NSString *shortcutsId;
@property (nonatomic) int resultType;
@property (copy, nonatomic) NSString *completeFailReason;
@property (copy, nonatomic) NSString *baseModel;
@property (copy, nonatomic) NSString *adapterModel;
@property (copy, nonatomic) NSString *safetyModel;
@property (copy, nonatomic) NSString *modelDestination;
@property (copy, nonatomic) NSString *runErrorDomain;
@property (copy, nonatomic) NSNumber *runErrorCode;
@property (copy, nonatomic) NSNumber *runLatency;
@property (copy, nonatomic) NSNumber *inputTokenLength;
@property (copy, nonatomic) NSNumber *outputTokenLength;
@property (nonatomic) int requestType;
@property (nonatomic) int regionEligibility;
@property (copy, nonatomic) NSNumber *numFollowUp;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
