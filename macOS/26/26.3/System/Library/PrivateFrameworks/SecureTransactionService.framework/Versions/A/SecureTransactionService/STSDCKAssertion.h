@class NSString, NFDCKAssertion;

@interface STSDCKAssertion : NSObject

@property (readonly, nonatomic) NFDCKAssertion *assertion;
@property (readonly, nonatomic) NSString *keyIdentifier;

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAssertion:(id)a0;

@end
