@interface NameRecognition.AudioManager : NSObject <AVAudioPlayerDelegate> {
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ audioEngine;
    void /* unknown type, empty encoding */ audioSession;
    void /* unknown type, empty encoding */ inputNode;
    void /* unknown type, empty encoding */ audioPlayer;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ cancellables;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)handleAudioSessionInterruptionWithNotification:(id)a0;

@end
