@class NSUUID, NSData;

@interface C2MultipeerDiscoveryResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *requestUUID;
@property (retain, nonatomic) NSData *chunkSignature;
@property (nonatomic) BOOL chunkAvailable;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
