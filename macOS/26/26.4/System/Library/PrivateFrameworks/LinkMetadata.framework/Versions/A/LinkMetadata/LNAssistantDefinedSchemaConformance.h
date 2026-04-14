@class NSString;

@interface LNAssistantDefinedSchemaConformance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *publicIdentifier;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithName:(id)a0 version:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 version:(id)a1 domain:(id)a2;
- (id)initWithName:(id)a0 version:(id)a1 domain:(id)a2 publicIdentifier:(id)a3;

@end
