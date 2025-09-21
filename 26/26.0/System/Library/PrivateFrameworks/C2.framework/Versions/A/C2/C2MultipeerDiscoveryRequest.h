@class NSUUID, NSData, NSString;

@interface C2MultipeerDiscoveryRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *requestUUID;
@property (retain, nonatomic) NSData *chunkSignature;
@property (retain, nonatomic) NSString *containerIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
