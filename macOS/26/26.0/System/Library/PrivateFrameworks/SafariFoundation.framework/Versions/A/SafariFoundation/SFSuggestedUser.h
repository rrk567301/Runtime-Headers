@class NSString;

@interface SFSuggestedUser : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long usageFrequency;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic) long long type;

+ (id)suggestedUserWithValue:(id)a0 type:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 type:(long long)a1;

@end
