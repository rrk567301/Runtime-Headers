@class NSArray, LNValueType;

@interface LNQueryParameterComparatorMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long comparatorType;
@property (readonly, copy, nonatomic) LNValueType *valueType;
@property (readonly, copy, nonatomic) NSArray *resolvableInputTypes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithComparatorType:(unsigned long long)a0 valueType:(id)a1 resolvableInputTypes:(id)a2;

@end
