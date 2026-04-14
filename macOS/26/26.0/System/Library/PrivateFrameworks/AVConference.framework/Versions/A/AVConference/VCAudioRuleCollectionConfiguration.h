@interface VCAudioRuleCollectionConfiguration : NSObject

@property (nonatomic, getter=isContinuity) BOOL continuity;
@property (nonatomic) BOOL allowAudioSwitching;
@property (nonatomic) BOOL usesSBR;
@property (nonatomic) int aacBlockSize;
@property (nonatomic) unsigned long long channelCount;
@property (nonatomic) unsigned short minBlockSize;
@property (nonatomic) BOOL allowLargerBlockSizes;

- (id)init;

@end
