@class CoreRCManagerClient;

@interface CoreIRLearningSessionClient : CoreIRLearningSession

@property (nonatomic) CoreRCManagerClient *manager;

- (BOOL)startLearningCommand:(unsigned long long)a0;
- (void)endLearning;

@end
