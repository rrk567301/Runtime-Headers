@class CDPDevice, NSString, CDPLocalSecret, NSDictionary, OTClique;

@interface CDPDRemoteSecretValidationResult : NSObject

@property (nonatomic) unsigned long long secretType;
@property (nonatomic) char userDidCancel;
@property (nonatomic) char userDidReset;
@property (nonatomic) unsigned long long requiredEscapeOffers;
@property (nonatomic) unsigned long long escapeOffersPresentedMask;
@property (copy, nonatomic) CDPDevice *device;
@property (copy, nonatomic) NSString *validSecret;
@property (copy, nonatomic) CDPLocalSecret *cachedSecretForReenrollment;
@property (copy, nonatomic) NSDictionary *recoveredInfo;
@property (retain, nonatomic) OTClique *recoveredClique;

- (void).cxx_destruct;

@end
