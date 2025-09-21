@class NSMutableArray;

@interface VCAudioRuleCollection : NSObject <NSCopying> {
    int _deviceRole;
}

@property (nonatomic) int aacBlockSize;
@property (readonly, nonatomic) NSMutableArray *rules;
@property (readonly, nonatomic) NSMutableArray *secondaryPayloads;
@property (nonatomic) char allowAudioSwitching;
@property (nonatomic) char allowAudioRecording;
@property (nonatomic) char isHigherAudioREDCutoverU1Enabled;

+ (int)getForcedPayload;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)setRules:(id)a0;
- (void)clearAudioRules;
- (void)addAudioPayload:(int)a0 isSecondary:(char)a1 sbr:(char)a2;
- (void)addAudioRule:(id)a0;
- (void)addAudioRules:(id)a0;
- (id)initPrimaryPayload:(int)a0 dtxPayload:(int)a1 redPayload:(int)a2 secondaryPayloads:(id)a3 allowAudioSwitching:(char)a4 sbr:(char)a5 aacBlockSize:(int)a6;
- (id)initWithPhoneContinuity:(char)a0 allowAudioSwitching:(char)a1 sbr:(char)a2 aacBlockSize:(int)a3;
- (id)initWithPhoneContinuity:(char)a0 allowAudioSwitching:(char)a1 sbr:(char)a2 aacBlockSize:(int)a3 isLowLatencyAudio:(char)a4;
- (char)isPayloadSupported:(int)a0;
- (void)setupAudioRulesWithSBR:(char)a0 isContinuity:(char)a1;

@end
