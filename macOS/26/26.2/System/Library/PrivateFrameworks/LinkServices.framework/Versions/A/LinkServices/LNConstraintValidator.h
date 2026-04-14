@class NSXPCConnection;

@interface LNConstraintValidator : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (long long)validateAction:(id)a0 error:(id *)a1;

@end
