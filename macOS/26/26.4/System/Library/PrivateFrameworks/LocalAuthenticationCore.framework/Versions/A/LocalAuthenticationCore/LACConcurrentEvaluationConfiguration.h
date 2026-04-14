@class NSXPCListener;

@interface LACConcurrentEvaluationConfiguration : NSObject <LACConcurrentEvaluationConfiguring>

@property (nonatomic, retain) NSXPCListener *idleUIListener;
@property (nonatomic) BOOL isEvaluationOffloaded;

- (void).cxx_destruct;
- (id)init;

@end
