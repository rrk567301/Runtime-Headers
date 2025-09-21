@class NSUUID, NSDictionary;

@interface WPPeerTrackingRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property unsigned char clientType;
@property (retain) NSUUID *peerUUID;
@property (retain) NSDictionary *peerTrackingDictionary;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
