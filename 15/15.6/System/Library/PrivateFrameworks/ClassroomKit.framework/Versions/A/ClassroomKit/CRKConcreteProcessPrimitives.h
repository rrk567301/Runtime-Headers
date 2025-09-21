@interface CRKConcreteProcessPrimitives : NSObject <CRKProcessPrimitives>

- (char)processExistsWithIdentifier:(int)a0;
- (id)subscribeToExitForProcessWithIdentifier:(int)a0 exitHandler:(id /* block */)a1;

@end
