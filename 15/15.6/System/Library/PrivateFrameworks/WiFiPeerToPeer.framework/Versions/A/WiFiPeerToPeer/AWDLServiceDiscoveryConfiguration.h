@class NSData;

@interface AWDLServiceDiscoveryConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSData *serviceKey;
@property (readonly, nonatomic) NSData *serviceValue;
@property (readonly, nonatomic) char isResolve;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKey:(id)a0;
- (id)initWithKey:(id)a0 value:(id)a1 resolve:(char)a2;

@end
