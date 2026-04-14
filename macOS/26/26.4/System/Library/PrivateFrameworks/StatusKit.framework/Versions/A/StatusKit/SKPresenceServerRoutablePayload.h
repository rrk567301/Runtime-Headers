@class NSData, NSUUID;

@interface SKPresenceServerRoutablePayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *payloadData;
@property (readonly, copy, nonatomic) NSUUID *routingUUID;
@property (readonly, copy, nonatomic) NSData *payloadKeyData;

+ (id)logger;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 routingUUID:(id)a1 payloadKeyData:(id)a2;

@end
