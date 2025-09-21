@class NSString;

@interface PGMoodSourceSceneIdentifier : NSObject

@property (retain) NSString *moodIdentifier;
@property char isDistributed;
@property char isHighConfidence;

- (void).cxx_destruct;

@end
