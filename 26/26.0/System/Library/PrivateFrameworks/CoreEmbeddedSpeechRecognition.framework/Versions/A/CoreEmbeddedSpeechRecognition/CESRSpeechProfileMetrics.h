@interface CESRSpeechProfileMetrics : NSObject

@property (nonatomic) unsigned int totalNumEntitiesReceived;
@property (nonatomic) BOOL isCleanupIngestionEnabled;
@property (nonatomic) unsigned int numEntitiesContainingEmoji;
@property (nonatomic) unsigned int numEntitiesContainingSpecialCharacters;
@property (nonatomic) unsigned int numEntitiesCleaned;
@property (nonatomic) BOOL isExtractionIngestionEnabled;
@property (nonatomic) BOOL isExtractionSetupSuccessful;
@property (nonatomic) unsigned int numEntitiesExtractionAttempted;
@property (nonatomic) unsigned int numEntitiesContainingExtractions;
@property (nonatomic) unsigned int numEntitiesExtracted;

- (void)reset;
- (id)init;
- (id)description;

@end
