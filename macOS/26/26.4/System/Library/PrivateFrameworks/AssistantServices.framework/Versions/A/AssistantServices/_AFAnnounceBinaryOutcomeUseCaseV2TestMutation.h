@class NSString, AFAnnounceBinaryOutcomeUseCaseV2Test;

@interface _AFAnnounceBinaryOutcomeUseCaseV2TestMutation : NSObject <AFAnnounceBinaryOutcomeUseCaseV2TestMutating> {
    AFAnnounceBinaryOutcomeUseCaseV2Test *_base;
    struct _mutationFlags { unsigned char isDirty : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (id)initWithBase:(id)a0;
- (void).cxx_destruct;

@end
