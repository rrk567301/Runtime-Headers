@class NSData, NSString, NSArray;

@interface NSPPrivateAccessTokenChallenge : NSObject {
    unsigned short _tokenType;
    NSData *_challengeData;
    NSString *_issuerName;
    NSData *_redemptionNonce;
    NSString *_originName;
    NSArray *_originNames;
    NSString *_originInfo;
}

@property (readonly) NSData *challengeData;
@property (readonly) unsigned short tokenType;
@property (readonly) NSString *issuerName;
@property (readonly) NSData *redemptionNonce;
@property (readonly) NSString *originName;
@property (readonly) NSArray *originNames;
@property (readonly) BOOL isSupportedTokenType;
@property (readonly) BOOL typeRequiresOriginName;
@property (readonly) BOOL typeRequiresRedemptionNonce;
@property (readonly) BOOL typeHasAllowedOriginList;

+ (id)tokenKeyAttributeName;
+ (id)httpAuthenticationScheme;
+ (id)originNameKeyAttributeName;
+ (id)challengeAttributeName;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initRSABlindSignatureChallengeWithIssuerName:(id)a0 redemptionNonce:(id)a1 originNames:(id)a2;
- (id)initARCChallengeWithIssuerName:(id)a0;
- (id)initATHMChallengeWithIssuerName:(id)a0;
- (id)initRateLimitedRSABlindSignatureChallengeWithIssuerName:(id)a0 redemptionNonce:(id)a1 originNames:(id)a2;

@end
