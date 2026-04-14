@class NSNumber, NSData;

@interface MTRWebRTCTransportProviderClusterSFrameStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *cipherSuite;
@property (copy, nonatomic) NSData *baseKey;
@property (copy, nonatomic) NSData *kid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
