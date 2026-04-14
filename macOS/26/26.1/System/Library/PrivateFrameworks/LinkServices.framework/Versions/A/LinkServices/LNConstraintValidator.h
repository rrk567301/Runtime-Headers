@class NSXPCConnection;

@interface LNConstraintValidator : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (long long)validateAction:(id)a0 error:(id *)a1;

@end
