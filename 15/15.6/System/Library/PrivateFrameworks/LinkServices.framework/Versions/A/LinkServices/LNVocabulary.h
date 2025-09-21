@class NSString, NSDictionary;

@interface LNVocabulary : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *term;
@property (readonly, copy, nonatomic) NSDictionary *traits;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTerm:(id)a0 entityIdentifier:(id)a1;
- (id)initWithTerm:(id)a0 appSettingName:(id)a1;
- (id)initWithTerm:(id)a0 entityTypeName:(id)a1;
- (id)initWithTerm:(id)a0 traits:(id)a1;

@end
