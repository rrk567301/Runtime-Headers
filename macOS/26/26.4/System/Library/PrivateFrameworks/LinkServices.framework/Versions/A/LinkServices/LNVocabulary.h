@class NSString, NSDictionary;

@interface LNVocabulary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *term;
@property (readonly, copy, nonatomic) NSDictionary *traits;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithTerm:(id)a0 entityIdentifier:(id)a1;
- (id)initWithTerm:(id)a0 appSettingName:(id)a1;
- (id)initWithTerm:(id)a0 entityTypeName:(id)a1;
- (id)initWithTerm:(id)a0 traits:(id)a1;

@end
