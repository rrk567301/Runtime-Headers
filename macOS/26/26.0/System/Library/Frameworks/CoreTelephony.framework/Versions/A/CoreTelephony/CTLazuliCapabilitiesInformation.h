@class CTLazuliDestination, NSString, CTLazuliAlternateIdentities, NSDate;

@interface CTLazuliCapabilitiesInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliDestination *recipient;
@property (nonatomic) BOOL supportsVideoSharing;
@property (nonatomic) BOOL supportsImageSharing;
@property (nonatomic) BOOL supportsChat;
@property (nonatomic) BOOL supportsFileTransfer;
@property (nonatomic) BOOL supportsGeolocationCapabilities;
@property (nonatomic) BOOL isBot;
@property (retain, nonatomic) NSString *supportedLazuliExtensions;
@property (nonatomic) BOOL supportsFeature;
@property (nonatomic) long long availibility;
@property (retain, nonatomic) CTLazuliAlternateIdentities *alternateIdentities;
@property (retain, nonatomic) NSDate *validUntil;
@property (nonatomic) BOOL supportsSecurity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliCapabilitiesInformation:(id)a0;

@end
