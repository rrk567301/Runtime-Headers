@class NSString, LNValueType;

@interface LNResolvableInputMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long kind;
@property (readonly, copy, nonatomic) NSString *queryType;
@property (readonly, copy, nonatomic) LNValueType *valueType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithQueryType:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithValueType:(id)a0;

@end
