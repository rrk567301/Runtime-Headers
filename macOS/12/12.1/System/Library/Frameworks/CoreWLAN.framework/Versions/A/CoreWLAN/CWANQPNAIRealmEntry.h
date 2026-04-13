@class NSString;

@interface CWANQPNAIRealmEntry : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long encodingType;
@property (copy, nonatomic) NSString *realmName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEncodingType:(long long)a0 realmName:(id)a1;

@end
