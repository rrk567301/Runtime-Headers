@class SPExecutionPolicy;

@interface SPExecutionPolicyExportedObject : NSObject <ExecManagerRemote>

@property (weak, nonatomic) SPExecutionPolicy *parent;

- (id)initWithParent:(id)a0;
- (void).cxx_destruct;
- (void)doGatekeeperProgressUpdate:(long long)a0 withTotal:(long long)a1;

@end
