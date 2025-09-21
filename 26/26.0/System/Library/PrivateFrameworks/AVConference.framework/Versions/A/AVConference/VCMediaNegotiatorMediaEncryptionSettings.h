@class NSData, NSMutableSet;

@interface VCMediaNegotiatorMediaEncryptionSettings : NSObject

@property (readonly, nonatomic) NSMutableSet *mediaCipherSuites;
@property (readonly, nonatomic) NSMutableSet *srtcpCipherSuites;
@property (readonly, nonatomic) NSData *sendMediaKey;

- (void)dealloc;
- (void)addMediaCipherSuite:(long long)a0;
- (void)addSRTCPCipherSuite:(long long)a0;
- (id)initWithSendMediaKey:(id)a0;
- (BOOL)isEqualToEncryptionSettings:(id)a0;

@end
