@class NSString, PCSLockManager;

@interface PCSLockAssertion : NSObject

@property (retain) NSString *name;
@property (retain) PCSLockManager *manager;
@property BOOL held;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initAssertion:(id)a0 manager:(id)a1;
- (BOOL)holdAssertion;
- (void)dropAssertion;

@end
