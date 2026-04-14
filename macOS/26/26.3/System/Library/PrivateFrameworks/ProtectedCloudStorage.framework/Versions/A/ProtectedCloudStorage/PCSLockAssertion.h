@class NSString, PCSLockManager;

@interface PCSLockAssertion : NSObject

@property (retain) NSString *name;
@property (retain) PCSLockManager *manager;
@property BOOL held;

- (void).cxx_destruct;
- (void)dealloc;
- (void)dropAssertion;
- (BOOL)holdAssertion;
- (id)initAssertion:(id)a0 manager:(id)a1;

@end
