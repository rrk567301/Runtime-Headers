@class CTLazuliChatCapabilities, CTLazuliBusinessMessagingCapabilities, CTLazuliMessagingCapabilities, CTLazuliFileTransferCapabilities, CTLazuliUserIdentities, CTLazuliGroupChatCapabilities, CTLazuliDiscoveryCapabilities, CTLazuliOperationStatus, NSNumber;

@interface CTLazuliSystemConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CTLazuliMessagingCapabilities *messagingCapabilities;
@property (retain, nonatomic) CTLazuliChatCapabilities *chatCapabilities;
@property (retain, nonatomic) CTLazuliGroupChatCapabilities *groupChatCapabilites;
@property (retain, nonatomic) CTLazuliFileTransferCapabilities *fileTransferCapabilities;
@property (retain, nonatomic) CTLazuliOperationStatus *operationStatus;
@property (retain, nonatomic) CTLazuliDiscoveryCapabilities *discoverCapabilities;
@property (retain, nonatomic) CTLazuliUserIdentities *identity;
@property (retain, nonatomic) CTLazuliBusinessMessagingCapabilities *businessMessagingCapabilities;
@property (nonatomic) char featureSupported;
@property (nonatomic) char featureEnabledByDefault;
@property (nonatomic) char featureDisabledByProfile;
@property (nonatomic) char featureDisabledStoreDemo;
@property (retain, nonatomic) NSNumber *bsfPort;
@property (nonatomic) char bsfUsesSecureTransport;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliSystemConfiguration:(id)a0;

@end
