@class NSUUID, NSData;

@interface C2MultipeerDiscoveryResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSUUID *requestUUID;
@property (retain, nonatomic) NSData *chunkSignature;
@property (nonatomic) char chunkAvailable;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
