@class NSString, NSArray;

@interface LNBasePhraseTemplateSubstitution : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *basePhraseTemplate;
@property (readonly, copy, nonatomic) NSArray *parameterSubstitutions;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBasePhraseTemplate:(id)a0 parameterSubstitutions:(id)a1;

@end
