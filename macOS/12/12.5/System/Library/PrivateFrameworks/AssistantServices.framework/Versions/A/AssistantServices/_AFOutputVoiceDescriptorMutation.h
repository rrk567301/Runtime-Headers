@class NSString, AFOutputVoiceDescriptor;

@interface _AFOutputVoiceDescriptorMutation : NSObject <AFOutputVoiceDescriptorMutating> {
    AFOutputVoiceDescriptor *_baseModel;
    NSString *_localizedDisplay;
    NSString *_localizedDisplayWithRegion;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasLocalizedDisplay : 1; unsigned char hasLocalizedDisplayWithRegion : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setLocalizedDisplay:(id)a0;
- (void)setLocalizedDisplayWithRegion:(id)a0;

@end
