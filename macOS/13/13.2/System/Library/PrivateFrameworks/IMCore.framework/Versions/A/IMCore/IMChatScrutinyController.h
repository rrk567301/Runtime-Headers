@interface IMChatScrutinyController : NSObject

+ (id)sharedController;

- (void)markMessageAsCorrupt:(id)a0;
- (void)markMessageAsNotCorrupt:(id)a0;
- (double)_maxDurationForScrutinyMode;
- (id)transcriptRenderingMetadataForChatIdentifier:(id)a0;
- (id)scrutinyInfo;
- (void)setTranscriptRenderingMetadata:(id)a0 forChatIdentifier:(id)a1;

@end
