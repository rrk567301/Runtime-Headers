@class NSUUID, NSDictionary;

@interface WPPeerTrackingRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned char clientType;
@property (retain) NSUUID *peerUUID;
@property (retain) NSDictionary *peerTrackingDictionary;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
