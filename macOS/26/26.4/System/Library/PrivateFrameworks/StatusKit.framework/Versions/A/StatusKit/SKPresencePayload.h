@class NSDictionary, NSData;

@interface SKPresencePayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *payloadDictionary;
@property (retain, nonatomic) NSDictionary *cachedPayloadDictionary;
@property (readonly, nonatomic) NSData *payloadData;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) double ttlSeconds;

+ (id)logger;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 priority:(long long)a1;
- (id)initWithDictionary:(id)a0 priority:(long long)a1;
- (id)initWithData:(id)a0 priority:(long long)a1 ttlSeconds:(double)a2;
- (id)initWithDictionary:(id)a0 priority:(long long)a1 ttlSeconds:(double)a2;

@end
