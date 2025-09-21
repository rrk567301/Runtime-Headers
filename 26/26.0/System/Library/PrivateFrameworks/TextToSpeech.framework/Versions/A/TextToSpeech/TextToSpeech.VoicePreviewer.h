@interface TextToSpeech.VoicePreviewer : SwiftNativeNSObject <AVAudioPlayerDelegate> {
    void /* unknown type, empty encoding */ voiceDbClient;
    void /* unknown type, empty encoding */ sampleAssetUrl;
    void /* unknown type, empty encoding */ $__lazy_storage_$_synth;
    void /* unknown type, empty encoding */ currentPlayer;
    void /* unknown type, empty encoding */ currentPreviewContinuation;
    void /* unknown type, empty encoding */ initialized;
    void /* unknown type, empty encoding */ initializationTask;
    void /* unknown type, empty encoding */ $__lazy_storage_$_xpcClient;
    void /* unknown type, empty encoding */ siriQueue;
}

- (id)init;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;

@end
