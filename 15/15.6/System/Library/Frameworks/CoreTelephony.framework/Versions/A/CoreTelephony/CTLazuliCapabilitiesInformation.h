@class CTLazuliDestination, NSString, CTLazuliAlternateIdentities, NSDate;

@interface CTLazuliCapabilitiesInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CTLazuliDestination *recipient;
@property (nonatomic) char supportsVideoSharing;
@property (nonatomic) char supportsImageSharing;
@property (nonatomic) char supportsChat;
@property (nonatomic) char supportsFileTransfer;
@property (nonatomic) char supportsGeolocationCapabilities;
@property (nonatomic) char isBot;
@property (retain, nonatomic) NSString *supportedLazuliExtensions;
@property (nonatomic) char supportsFeature;
@property (nonatomic) long long availibility;
@property (retain, nonatomic) CTLazuliAlternateIdentities *alternateIdentities;
@property (retain, nonatomic) NSDate *validUntil;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliCapabilitiesInformation:(id)a0;

@end
