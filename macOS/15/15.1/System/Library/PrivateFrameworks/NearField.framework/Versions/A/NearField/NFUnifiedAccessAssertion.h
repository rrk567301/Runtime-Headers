@class NSString, SESAssertion;

@interface NFUnifiedAccessAssertion : NSObject

@property (readonly, nonatomic) SESAssertion *sesAssertion;
@property (readonly, nonatomic) NSString *keyIdentifier;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithSESAssertion:(id)a0;

@end
