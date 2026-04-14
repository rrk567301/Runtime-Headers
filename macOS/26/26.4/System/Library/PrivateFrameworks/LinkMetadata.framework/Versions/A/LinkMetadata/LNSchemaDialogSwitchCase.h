@class LNValue, LNSchemaDialogStatement;

@interface LNSchemaDialogSwitchCase : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNValue *value;
@property (readonly, nonatomic) LNSchemaDialogStatement *statement;
@property (readonly, nonatomic, getter=isDefaultCase) BOOL defaultCase;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDefaultStatement:(id)a0;
- (id)initWithValue:(id)a0 statement:(id)a1;

@end
