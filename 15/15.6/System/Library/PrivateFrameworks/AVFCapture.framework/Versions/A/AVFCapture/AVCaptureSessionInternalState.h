@interface AVCaptureSessionInternalState : NSObject {
    struct OpaqueCMIOGraph { } *_graph;
    struct __CFDictionary { } *_supportUnitsForInputPorts;
    char _hasAudioMixerNode;
    int _audioMixerNode;
    char _hasAudioMixerFanOutNode;
    int _audioMixerFanOutNode;
    char _masterSynchronizerSet;
    int _candidateMasterSynchronizerNode;
}

- (void)dealloc;
- (id)init;
- (void)invalidate;

@end
