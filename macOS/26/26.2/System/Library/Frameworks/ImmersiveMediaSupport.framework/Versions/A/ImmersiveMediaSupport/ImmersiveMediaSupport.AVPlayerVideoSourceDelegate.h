@interface ImmersiveMediaSupport.AVPlayerVideoSourceDelegate : NSObject <AVPlayerItemMetadataOutputPushDelegate> {
    void /* unknown type, empty encoding */ presentationDescriptorReader;
}

- (void).cxx_destruct;
- (id)init;
- (void)metadataOutput:(id)a0 didOutputTimedMetadataGroups:(id)a1 fromPlayerItemTrack:(id)a2;

@end
