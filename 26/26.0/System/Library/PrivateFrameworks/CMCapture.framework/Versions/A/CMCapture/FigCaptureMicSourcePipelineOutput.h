@class BWNodeOutput;

@interface FigCaptureMicSourcePipelineOutput : NSObject {
    BWNodeOutput *_output;
    unsigned int _audioChannelLayoutTag;
}

- (id)description;
- (void).cxx_destruct;

@end
