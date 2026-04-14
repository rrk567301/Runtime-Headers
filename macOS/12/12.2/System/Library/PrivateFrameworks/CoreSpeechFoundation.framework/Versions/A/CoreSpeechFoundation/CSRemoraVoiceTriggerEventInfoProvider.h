@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSRemoraVoiceTriggerEventInfoProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventInfos;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)setVoiceTriggerEventInfo:(id)a0 endpointId:(id)a1;
- (id)getVoiceTriggerEventInfoForEndpointId:(id)a0;

@end
