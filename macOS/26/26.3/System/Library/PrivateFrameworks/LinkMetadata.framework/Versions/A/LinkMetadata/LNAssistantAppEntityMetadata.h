@class NSString, NSArray;

@interface LNAssistantAppEntityMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *entityIdentifier;
@property (readonly, nonatomic) long long kind;
@property (readonly, copy, nonatomic) NSArray *phraseTemplates;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEntityIdentifier:(id)a0 kind:(long long)a1 phraseTemplates:(id)a2;

@end
