@interface AVB17221AEM618836AM824StreamFormat : AVB17221AEM618836StreamFormat

@property unsigned char iec60958Cnt;
@property unsigned char mblaCnt;
@property unsigned char midiCnt;
@property unsigned char smpteCnt;

+ (id)keyPathsForValuesAffectingIec60958Cnt;
+ (id)keyPathsForValuesAffectingMblaCnt;
+ (id)keyPathsForValuesAffectingMidiCnt;
+ (id)keyPathsForValuesAffectingSmpteCnt;

- (id)init;
- (unsigned short)numberOfAudioChannels;
- (unsigned char)mblaCnt;
- (char)isControlFormat;
- (unsigned char)midiCnt;
- (void)setIec60958Cnt:(unsigned char)a0;
- (id)formatsByExpandingFormat;
- (unsigned char)iec60958Cnt;
- (char)isAudioFormat;
- (char)isCompatibleAsListenerForFormat:(id)a0;
- (char)isMIDIFormat;
- (char)isPotentiallyCompatibleAsListenerForFormat:(id)a0;
- (char)isSMPTEFormat;
- (char)isSupportedFormat;
- (void)setMblaCnt:(unsigned char)a0;
- (void)setMidiCnt:(unsigned char)a0;
- (void)setSmpteCnt:(unsigned char)a0;
- (unsigned char)smpteCnt;
- (id)streamFormatCompatibleWithTalkerFormat:(id)a0;

@end
