@class NSString, NSNumber;

@interface ASCAdamID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) ASCAdamID *invalidAdamID;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) long long int64value;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStringValue:(id)a0;
- (id)initWithInt64:(long long)a0;
- (id)initWithNumberValue:(id)a0;

@end
