@class SPExecutionPolicy;

@interface SPExecutionPolicyExportedObject : NSObject <ExecManagerRemote>

@property (weak, nonatomic) SPExecutionPolicy *parent;

- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (void)doGatekeeperProgressUpdate:(long long)a0 withTotal:(long long)a1;

@end
