@class NSString, NSArray;

@interface LNParameterSubstitution : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *parameterIdentifier;
@property (readonly, copy, nonatomic) NSArray *substitutionValues;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParameterIdentifier:(id)a0 substitutionValues:(id)a1;

@end
