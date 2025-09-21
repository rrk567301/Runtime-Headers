@class CoreRCManagerClient;

@interface CoreIRLearningSessionClient : CoreIRLearningSession

@property (nonatomic) CoreRCManagerClient *manager;

- (BOOL)addMappingWithProtocolID:(unsigned char)a0 options:(unsigned char)a1 commandToMap:(unsigned long long)a2 command:(unsigned long long)a3 repeat:(unsigned long long)a4;
- (void)endLearning;
- (BOOL)startLearningCommand:(unsigned long long)a0;

@end
