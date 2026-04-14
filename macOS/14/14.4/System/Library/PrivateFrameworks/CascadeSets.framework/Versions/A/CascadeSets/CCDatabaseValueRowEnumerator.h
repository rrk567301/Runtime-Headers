@class CCDatabaseEnumerationResult, CCActivationAssertion;

@interface CCDatabaseValueRowEnumerator : NSObject

@property (readonly, nonatomic) CCDatabaseEnumerationResult *enumerationResult;
@property (readonly, nonatomic) CCActivationAssertion *assertion;

+ (id)assertionedValueRowEnumerator:(id)a0 assertion:(id)a1;

- (void).cxx_destruct;
- (id)error;
- (id)next;
- (id)peek;
- (id)initWithEnumerationResult:(id)a0;
- (id)initWithEnumerationResult:(id)a0 assertion:(id)a1;

@end
