@class NSDictionary, NSString;

@interface BMMiningTaskConfig : NSObject

@property (retain) NSDictionary *bmMiningTaskConfig;
@property (retain, nonatomic) NSString *trialID;
@property (nonatomic) BOOL interactionExtractedTopicFromAttachmentFactorInUse;

- (id)init;
- (void).cxx_destruct;
- (void)loadDefaultConfig;
- (BOOL)loadBMMiningTaskConfig:(id)a0;
- (void)updateFactorLevelsFromFilePath:(id)a0;

@end
