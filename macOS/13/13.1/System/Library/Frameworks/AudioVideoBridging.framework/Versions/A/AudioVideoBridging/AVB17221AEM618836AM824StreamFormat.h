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
- (BOOL)isSupportedAudioFormat;
- (BOOL)isAudioFormat;
- (BOOL)isSMPTEFormat;
- (BOOL)isMIDIFormat;
- (BOOL)isControlFormat;
- (BOOL)isCompatibleAsListenerForFormat:(id)a0;
- (BOOL)isPotentiallyCompatibleAsListenerForFormat:(id)a0;
- (id)streamFormatCompatibleWithTalkerFormat:(id)a0;
- (void)setIec60958Cnt:(unsigned char)a0;
- (unsigned char)iec60958Cnt;
- (void)setMblaCnt:(unsigned char)a0;
- (unsigned char)mblaCnt;
- (void)setMidiCnt:(unsigned char)a0;
- (unsigned char)midiCnt;
- (void)setSmpteCnt:(unsigned char)a0;
- (unsigned char)smpteCnt;

@end
