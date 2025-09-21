@class NSString, RBSAssertion;

@interface _PFRunningBoardBackgroundRuntimeVoucher : _PFBackgroundRuntimeVoucher

@property (retain, nonatomic) RBSAssertion *assertion;
@property (readonly, nonatomic) NSString *explanation;
@property (readonly, nonatomic) BOOL isValid;

+ (id)domainAttribute;
+ (id)_beginPowerAssertionNamed:(id)a0;
+ (void)_endPowerAssertionWithVoucher:(id)a0;

- (id)initWithTask:(id)a0;
- (void)dealloc;

@end
