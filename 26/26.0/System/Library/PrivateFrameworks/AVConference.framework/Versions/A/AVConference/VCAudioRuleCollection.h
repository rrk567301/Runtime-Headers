@class NSMutableArray;

@interface VCAudioRuleCollection : NSObject <NSCopying> {
    int _deviceRole;
}

@property (nonatomic) int aacBlockSize;
@property (readonly, nonatomic) NSMutableArray *rules;
@property (readonly, nonatomic) NSMutableArray *secondaryPayloads;
@property (readonly, nonatomic) BOOL usesSBR;
@property (nonatomic) BOOL allowAudioSwitching;
@property (nonatomic) BOOL allowAudioRecording;
@property (nonatomic) BOOL isHigherAudioREDCutoverU1Enabled;

+ (id)defaultPayloads;
+ (void)addSupportGuardedPayloadsToBasePayloads:(id)a0 withConfiguration:(id)a1 forSwitchingCase:(BOOL)a2;
+ (id)continuityPayloads;
+ (int)getForcedPayload;
+ (id)payloadsFor10MSBlockSize;
+ (id)payloadsFor5MSBlockSize;
+ (id)payloadsForQuadChannel;
+ (BOOL)processPayloads:(id)a0 withMinBlockSize:(unsigned short)a1 allowLargerBlockSizes:(BOOL)a2;
+ (void)restrictPayloads:(id)a0 forChannelCount:(unsigned long long)a1;
+ (id)secondaryPayloads;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setRules:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearAudioRules;
- (void)addAudioPayload:(int)a0 isSecondary:(BOOL)a1 sbr:(BOOL)a2;
- (void)addAudioRule:(id)a0;
- (void)addAudioRules:(id)a0;
- (id)initPrimaryPayload:(int)a0 dtxPayload:(int)a1 redPayload:(int)a2 secondaryPayloads:(id)a3 allowAudioSwitching:(BOOL)a4 sbr:(BOOL)a5 aacBlockSize:(int)a6;
- (BOOL)isPayloadSupported:(int)a0;
- (id)payloadsForAudioSwitchingWithConfiguration:(id)a0;
- (BOOL)setUpAudioRulesWithConfiguration:(id)a0;
- (BOOL)setUpForcedPayload;

@end
