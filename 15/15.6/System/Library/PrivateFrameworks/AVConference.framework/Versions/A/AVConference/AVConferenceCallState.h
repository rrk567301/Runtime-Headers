@class VCCapabilities;

@interface AVConferenceCallState : NSObject

@property (nonatomic, getter=isAudioPaused) char audioIsPaused;
@property (nonatomic, getter=isVideoPaused) char isVideoPaused;
@property (nonatomic, getter=isAudioSending) char isAudioSending;
@property (retain, nonatomic) VCCapabilities *capabilities;
@property (nonatomic) unsigned char relayedCallType;

- (void)dealloc;

@end
