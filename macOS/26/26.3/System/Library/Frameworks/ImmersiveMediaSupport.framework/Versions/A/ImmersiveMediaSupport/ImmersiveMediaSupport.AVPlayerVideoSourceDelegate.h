@interface ImmersiveMediaSupport.AVPlayerVideoSourceDelegate : NSObject <AVPlayerItemMetadataOutputPushDelegate> {
    void /* unknown type, empty encoding */ presentationDescriptorReader;
}

- (id)init;
- (void).cxx_destruct;
- (void)metadataOutput:(id)a0 didOutputTimedMetadataGroups:(id)a1 fromPlayerItemTrack:(id)a2;

@end
