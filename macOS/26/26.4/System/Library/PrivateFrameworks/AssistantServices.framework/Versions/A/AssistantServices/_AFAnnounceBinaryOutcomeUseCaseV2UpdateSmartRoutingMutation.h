@class NSString, AFAnnounceBinaryOutcomeUseCaseV2UpdateSmartRouting;

@interface _AFAnnounceBinaryOutcomeUseCaseV2UpdateSmartRoutingMutation : NSObject <AFAnnounceBinaryOutcomeUseCaseV2UpdateSmartRoutingMutating> {
    AFAnnounceBinaryOutcomeUseCaseV2UpdateSmartRouting *_base;
    NSString *_outputDeviceName;
    NSString *_sourceDeviceName;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasOutputDeviceName : 1; unsigned char hasSourceDeviceName : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (id)initWithBase:(id)a0;
- (void).cxx_destruct;
- (id)getOutputDeviceName;
- (id)getSourceDeviceName;
- (void)setOutputDeviceName:(id)a0;
- (void)setSourceDeviceName:(id)a0;

@end
