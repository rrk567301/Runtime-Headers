@class NSError, ECDKIMMessageHeader, NSString;

@interface ECMessageAuthenticationResult : NSObject

@property (nonatomic) char dkimAttemptedHeaderVerification;
@property (nonatomic) char dkimHeadersVerified;
@property (nonatomic) char dkimAttemptedBodyVerification;
@property (nonatomic) char dkimBodyVerified;
@property (retain, nonatomic) ECDKIMMessageHeader *bestDKIMSignatureHeader;
@property (retain, nonatomic) NSError *dkimError;
@property (nonatomic) char dkimHasServerResult;
@property (nonatomic) char dkimServerVerified;
@property (copy, nonatomic) NSString *dkimServerSigningDomain;
@property (copy, nonatomic) NSString *dkimServerResultSelector;
@property (nonatomic) long long dmarcStatus;
@property (nonatomic) long long dmarcReceiverPolicy;
@property (nonatomic) long long dmarcIdentifierAlignment;
@property (nonatomic) long long dmarcServerStatus;

- (void).cxx_destruct;

@end
