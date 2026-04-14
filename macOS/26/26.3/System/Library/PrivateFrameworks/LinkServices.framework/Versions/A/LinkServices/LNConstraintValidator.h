@class NSXPCConnection;

@interface LNConstraintValidator : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)validateAction:(id)a0 error:(id *)a1;

@end
