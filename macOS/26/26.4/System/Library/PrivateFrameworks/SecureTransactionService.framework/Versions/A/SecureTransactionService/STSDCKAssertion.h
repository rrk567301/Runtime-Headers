@class NSString, NFDCKAssertion;

@interface STSDCKAssertion : NSObject

@property (readonly, nonatomic) NFDCKAssertion *assertion;
@property (readonly, nonatomic) NSString *keyIdentifier;

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithAssertion:(id)a0;

@end
