@class NSString;

@interface LNAssistantDefinedSchemaConformance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *domain;

- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 version:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 version:(id)a1 domain:(id)a2;

@end
