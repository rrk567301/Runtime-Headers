@class CoreRCManagerClient;

@interface CoreIRLearningSessionClient : CoreIRLearningSession

@property (nonatomic) CoreRCManagerClient *manager;

- (void)endLearning;
- (char)startLearningCommand:(unsigned long long)a0;

@end
