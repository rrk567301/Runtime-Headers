@class NSNumber, NSData;

@interface MTRWebRTCTransportProviderClusterSFrameStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *cipherSuite;
@property (copy, nonatomic) NSData *baseKey;
@property (copy, nonatomic) NSData *kid;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
