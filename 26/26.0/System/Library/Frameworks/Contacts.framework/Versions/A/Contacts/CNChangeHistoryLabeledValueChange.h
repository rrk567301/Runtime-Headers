@class NSString;

@interface CNChangeHistoryLabeledValueChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, copy) NSString *propertyKey;
@property (readonly, nonatomic) NSString *labeledValueIdentifier;
@property (readonly, nonatomic) long long changeType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContactIdentifier:(id)a0 propertyKey:(id)a1 labeledValueIdentifier:(id)a2 changeType:(long long)a3;

@end
