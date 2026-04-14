@class NSString, NSDictionary;

@interface LNVocabulary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *term;
@property (readonly, copy, nonatomic) NSDictionary *traits;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTerm:(id)a0 entityIdentifier:(id)a1;
- (id)initWithTerm:(id)a0 appSettingName:(id)a1;
- (id)initWithTerm:(id)a0 entityTypeName:(id)a1;
- (id)initWithTerm:(id)a0 traits:(id)a1;

@end
