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
- (BOOL)isMIDIFormat;
- (BOOL)isSMPTEFormat;
- (BOOL)isControlFormat;
- (BOOL)isCompatibleAsListenerForFormat:(id)a0;
- (BOOL)isPotentiallyCompatibleAsListenerForFormat:(id)a0;
- (id)streamFormatCompatibleWithTalkerFormat:(id)a0;
- (unsigned char)iec60958Cnt;
- (unsigned char)mblaCnt;
- (unsigned char)midiCnt;
- (unsigned char)smpteCnt;
- (void)setIec60958Cnt:(unsigned char)a0;
- (void)setMblaCnt:(unsigned char)a0;
- (void)setMidiCnt:(unsigned char)a0;
- (void)setSmpteCnt:(unsigned char)a0;

@end
