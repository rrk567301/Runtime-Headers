@interface AKCertificatePinning : NSObject

+ (char)isValidCertificateTrust:(struct __SecTrust { } *)a0 forHostname:(id)a1;

@end
