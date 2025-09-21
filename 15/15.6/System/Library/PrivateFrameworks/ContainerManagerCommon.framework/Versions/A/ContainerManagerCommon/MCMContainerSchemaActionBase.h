@class NSString, MCMContainerSchemaContext;

@interface MCMContainerSchemaActionBase : NSObject <MCMContainerSchemaAction>

@property (readonly, nonatomic) MCMContainerSchemaContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionIdentifier;
+ (void)_resolveArguments:(id)a0 toPathArgument:(id *)a1 context:(id)a2;
+ (void)_resolveArguments:(id)a0 toSourcePathArgument:(id *)a1 destPathArgument:(id *)a2 destFinalPathArgument:(id *)a3 context:(id)a4;
+ (id)actionWithName:(id)a0 arguments:(id)a1 context:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (char)backupFileURL:(id)a0 error:(id *)a1;
- (char)fixAndRetryIfPermissionsErrorWithURL:(id)a0 error:(id *)a1 duringBlock:(id /* block */)a2;
- (char)makedirAtURL:(id)a0 followTerminalSymlink:(char)a1 error:(id *)a2;
- (char)performWithError:(id *)a0;

@end
