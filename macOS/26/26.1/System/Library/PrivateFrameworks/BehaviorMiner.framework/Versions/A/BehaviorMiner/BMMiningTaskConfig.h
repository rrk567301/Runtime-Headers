@class NSDictionary, NSString;

@interface BMMiningTaskConfig : NSObject

@property (retain) NSDictionary *bmMiningTaskConfig;
@property (retain, nonatomic) NSString *trialID;
@property (nonatomic) BOOL interactionExtractedTopicFromAttachmentFactorInUse;

- (void).cxx_destruct;
- (id)init;
- (void)updateFactorLevelsFromFilePath:(id)a0;
- (BOOL)loadBMMiningTaskConfig:(id)a0;
- (void)loadDefaultConfig;

@end
