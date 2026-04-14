@class BWNodeOutput;

@interface FigCaptureMicSourcePipelineOutput : NSObject {
    BWNodeOutput *_output;
    unsigned int _audioChannelLayoutTag;
}

- (void).cxx_destruct;
- (id)description;

@end
