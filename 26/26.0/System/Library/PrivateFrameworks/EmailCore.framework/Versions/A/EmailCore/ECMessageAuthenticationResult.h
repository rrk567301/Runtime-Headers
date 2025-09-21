@class NSError, ECDKIMMessageHeader, NSArray;

@interface ECMessageAuthenticationResult : NSObject

@property (nonatomic) BOOL dkimAttemptedHeaderVerification;
@property (nonatomic) BOOL dkimHeadersVerified;
@property (nonatomic) BOOL dkimAttemptedBodyVerification;
@property (nonatomic) BOOL dkimBodyVerified;
@property (retain, nonatomic) ECDKIMMessageHeader *bestDKIMSignatureHeader;
@property (retain, nonatomic) NSError *dkimError;
@property (copy, nonatomic) NSArray *dkimServerStatements;
@property (nonatomic) long long dmarcStatus;
@property (nonatomic) long long dmarcReceiverPolicy;
@property (nonatomic) long long dmarcIdentifierAlignment;
@property (nonatomic) long long dmarcServerStatus;

- (void).cxx_destruct;

@end
