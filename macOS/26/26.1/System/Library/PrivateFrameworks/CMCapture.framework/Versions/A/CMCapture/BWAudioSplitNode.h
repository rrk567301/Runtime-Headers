@class BWNodeInput, BWNodeOutput;

@interface BWAudioSplitNode : BWNode {
    unsigned int _splitAtIndex;
    unsigned int _inputNumberOfChannels;
    unsigned int _inputChannelLayoutTag;
    unsigned int _output1ChannelLayoutTag;
    unsigned int _output2ChannelLayoutTag;
    BWNodeInput *_input;
    BWNodeOutput *_output1;
    BWNodeOutput *_output2;
}

@property (nonatomic) unsigned int cinematicAudioIngestDomain;

+ (void)initialize;

- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeSubType;
- (BOOL)hasNonLiveConfigurationChanges;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)dealloc;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)initWithInputChannelLayoutTag:(unsigned int)a0 output1ChannelLayoutTag:(unsigned int)a1 output2ChannelLayoutTag:(unsigned int)a2;

@end
