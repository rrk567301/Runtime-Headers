@class NSXPCConnection;

@interface LNConstraintValidator : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)validateAction:(id)a0 error:(id *)a1;

@end
