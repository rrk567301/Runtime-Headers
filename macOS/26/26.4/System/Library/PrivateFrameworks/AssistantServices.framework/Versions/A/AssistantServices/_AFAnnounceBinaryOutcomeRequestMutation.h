@class NSString, AFAnnounceBinaryOutcomeRequest;
@protocol AFAnnounceBinaryOutcomeUseCaseV2;

@interface _AFAnnounceBinaryOutcomeRequestMutation : NSObject <AFAnnounceBinaryOutcomeRequestMutating> {
    AFAnnounceBinaryOutcomeRequest *_base;
    long long _useCase;
    id<AFAnnounceBinaryOutcomeUseCaseV2> _useCaseV2;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasUseCase : 1; unsigned char hasUseCaseV2 : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (void)setUseCase:(long long)a0;
- (id)initWithBase:(id)a0;
- (void).cxx_destruct;
- (long long)getUseCase;
- (id)getUseCaseV2;
- (void)setUseCaseV2:(id)a0;

@end
