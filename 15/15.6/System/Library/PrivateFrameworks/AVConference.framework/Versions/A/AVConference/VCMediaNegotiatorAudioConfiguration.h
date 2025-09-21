@class NSMutableSet;

@interface VCMediaNegotiatorAudioConfiguration : VCMediaNegotiatorCommonConfiguration <NSCopying> {
    NSMutableSet *_secondaryPayloads;
}

@property (nonatomic) char allowAudioSwitching;
@property (nonatomic) char allowAudioRecording;
@property (nonatomic) char useSBR;
@property (nonatomic) unsigned int audioUnitNumber;
@property (readonly, nonatomic) NSMutableSet *audioPayloads;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)addAudioPayload:(int)a0 isSecondary:(char)a1;
- (id)initWithAllowAudioSwitching:(char)a0 allowAudioRecording:(char)a1 useSBR:(char)a2 ssrc:(unsigned int)a3 audioUnitNumber:(unsigned int)a4;
- (id)initWithAllowAudioSwitching:(char)a0 allowAudioRecording:(char)a1 useSBR:(char)a2 ssrc:(unsigned int)a3 audioUnitNumber:(unsigned int)a4 audioRuleCollection:(id)a5;
- (char)isSecondaryPayload:(int)a0;

@end
