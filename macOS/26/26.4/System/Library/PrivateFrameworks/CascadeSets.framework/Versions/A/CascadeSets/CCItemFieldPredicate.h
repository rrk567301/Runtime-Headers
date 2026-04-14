@class NSObject;
@protocol NSSecureCoding;

@interface CCItemFieldPredicate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char predicateType;
@property (readonly, nonatomic) unsigned short fieldType;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *value;
@property (readonly, nonatomic) long long operatorType;

+ (id)predicateWithFieldType:(unsigned short)a0 equalsStringValue:(id)a1 error:(id *)a2;
+ (id)predicateWithFieldType:(unsigned short)a0 equalsDataValue:(id)a1 error:(id *)a2;
+ (id)predicateWithFieldType:(unsigned short)a0 equalsNumberValue:(id)a1 error:(id *)a2;
+ (id)predicateWithFieldType:(unsigned short)a0 greaterThanNumberValue:(id)a1 error:(id *)a2;
+ (id)predicateWithFieldType:(unsigned short)a0 greaterThanOrEqualToNumberValue:(id)a1 error:(id *)a2;
+ (id)predicateWithFieldType:(unsigned short)a0 lessThanNumberValue:(id)a1 error:(id *)a2;
+ (id)predicateWithFieldType:(unsigned short)a0 lessThanOrEqualToNumberValue:(id)a1 error:(id *)a2;
+ (id)predicateWithItemInstanceIdentifier:(id)a0 error:(id *)a1;
+ (id)predicateWithKeyPrefixedIdentifier:(id)a0 error:(id *)a1;
+ (id)predicateWithSharedItemIdentifier:(id)a0 error:(id *)a1;
+ (id)predicateWithSourceItemIdentifier:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithFieldType:(unsigned short)a0;
- (id)initWithPredicateType:(unsigned char)a0 fieldType:(unsigned short)a1 value:(id)a2 operatorType:(long long)a3;
- (BOOL)isEqualToItemFieldPredicate:(id)a0;

@end
