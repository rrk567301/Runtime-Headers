@class NSString, NSDictionary;
@protocol SKDEventInfo;

@interface SKDPipelineEvent : NSObject <SKDEvent>

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) unsigned char status;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *feedback;
@property (readonly, nonatomic) id<SKDEventInfo> info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadFailedEvent;
+ (id)_configurePipelineEventWithType:(unsigned char)a0 pipelineEventCode:(long long)a1;
+ (id)_pipelineEventForEventType:(unsigned char)a0 code:(long long)a1;
+ (id)alreadyProcessedEvent;
+ (id)ignoredProcessingEvent;
+ (id)loadEndedEvent;
+ (id)loadStartedEvent;
+ (id)loadSuceededEvent;
+ (id)needsProcessingEvent;
+ (id)processingBatchEvent;
+ (id)stateActiveEvent;
+ (id)stateAvailableEvent;
+ (id)stateDisabledEvent;
+ (id)stateEnabledEvent;
+ (id)stateInactiveEvent;
+ (id)stateResumedEvent;
+ (id)stateSuspendedEvent;
+ (id)stateUnavailableEvent;
+ (id)validateEligibleEvent;
+ (id)validateIneligibleEvent;
+ (id)validateInvalidEvent;
+ (id)validateValidEvent;

- (id)message;
- (void).cxx_destruct;
- (id)statusMessage;
- (id)initWithEventType:(unsigned char)a0 info:(id)a1;
- (id)initWithEventType:(unsigned char)a0 status:(unsigned char)a1;
- (id)typeMessage;

@end
