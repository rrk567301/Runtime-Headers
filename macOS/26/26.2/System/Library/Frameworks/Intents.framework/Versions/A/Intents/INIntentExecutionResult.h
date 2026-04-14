@class INIntentResponse, INIntent;

@interface INIntentExecutionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) INIntent *intent;
@property (readonly) INIntentResponse *intentResponse;

- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIntent:(id)a0 response:(id)a1;

@end
