@class VisionCoreE5RTProgramLibrary, ANSTViSegHQUpdateFramePostProcessor, NSURL, ANSTInferenceDescriptor;

@interface VisionCoreVideoSegmentationE5NetworkDescriptor : VisionCoreProcessingDescriptor {
    VisionCoreE5RTProgramLibrary *_programLibrary;
    ANSTViSegHQUpdateFramePostProcessor *_anstUpdateFramePostProcessor;
    ANSTInferenceDescriptor *_currentANSTDescriptor;
}

@property (readonly, nonatomic) NSURL *URL;

+ (id)descriptorForIdentifier:(id)a0 version:(id)a1 error:(id *)a2;
+ (id)_configurationForIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)functionForIdentifier:(id)a0 error:(id *)a1;
- (BOOL)postProcessUpdateFrameForInferenceOutputKeyBuffer:(const void *)a0 inferenceOutputValueBuffer:(const void *)a1 postProcessingOutputKeyBuffer:(void *)a2 postProcessingOutputValueBuffer:(void *)a3 error:(id *)a4;
- (id)descriptorForConfig:(id)a0 identifier:(id)a1 error:(id *)a2;
- (id)initWithSpecifier:(id)a0 url:(id)a1;
- (id)postProcessingOutputDescriptorsForFunction:(id)a0;

@end
