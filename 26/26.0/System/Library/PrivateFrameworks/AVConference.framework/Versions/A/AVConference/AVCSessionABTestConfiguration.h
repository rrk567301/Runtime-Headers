@interface AVCSessionABTestConfiguration : NSObject <NSCopying>

@property (nonatomic, getter=isOneToOneAuthenticationTagEnabled) BOOL oneToOneAuthenticationTagEnabled;
@property (nonatomic, getter=isGftTLEEnabled) BOOL gftTLEEnabled;
@property (nonatomic, getter=isP2PEncryptionEnabled) BOOL p2pEncryptionEnabled;

+ (id)createWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)dictionary;

@end
