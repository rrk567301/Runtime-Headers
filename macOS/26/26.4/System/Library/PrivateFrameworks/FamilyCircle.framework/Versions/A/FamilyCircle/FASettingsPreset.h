@class NSString, NSArray;

@interface FASettingsPreset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long minAge;
@property (readonly, nonatomic) long long maxAge;
@property (readonly, copy, nonatomic) NSArray *sources;

- (id)initWithDictionary:(id)a0;
- (id)sourceWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 minAge:(long long)a1 maxAge:(long long)a2 sources:(id)a3;

@end
