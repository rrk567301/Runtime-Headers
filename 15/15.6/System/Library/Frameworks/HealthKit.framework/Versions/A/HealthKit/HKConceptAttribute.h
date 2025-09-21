@class NSString, NSNumber;

@interface HKConceptAttribute : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isDeleted) char deleted;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) char boolValue;
@property (readonly, nonatomic) long long longLongValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 boolValue:(char)a1;
- (id)initWithType:(long long)a0 stringValue:(id)a1;
- (id)initWithType:(long long)a0 numberValue:(id)a1;
- (id)initWithType:(long long)a0 value:(id)a1 version:(long long)a2 deleted:(char)a3;

@end
