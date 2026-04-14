@class NSString, AFHomeAccessorySiriDataSharingPropagationLogEvent, NSDate;

@interface _AFHomeAccessorySiriDataSharingPropagationLogEventMutation : NSObject <AFHomeAccessorySiriDataSharingPropagationLogEventMutating> {
    AFHomeAccessorySiriDataSharingPropagationLogEvent *_baseModel;
    NSDate *_date;
    NSString *_accessoryIdentifier;
    long long _propagationEvent;
    NSString *_propagationEventReason;
    NSString *_associatedChangeLogEventIdentifier;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasDate : 1; unsigned char hasAccessoryIdentifier : 1; unsigned char hasPropagationEvent : 1; unsigned char hasPropagationEventReason : 1; unsigned char hasAssociatedChangeLogEventIdentifier : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setDate:(id)a0;
- (void)setAccessoryIdentifier:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setPropagationEvent:(long long)a0;
- (void)setPropagationEventReason:(id)a0;
- (void)setAssociatedChangeLogEventIdentifier:(id)a0;

@end
