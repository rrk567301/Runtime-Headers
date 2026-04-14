@class NSManagedObjectContext, NSString, RBSAssertion;

@interface ICManagedObjectContextSaveAssertion : NSObject <RBSAssertionObserving>

@property (weak) NSManagedObjectContext *context;
@property (retain) RBSAssertion *assertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (id)initWithManagedObjectContext:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
