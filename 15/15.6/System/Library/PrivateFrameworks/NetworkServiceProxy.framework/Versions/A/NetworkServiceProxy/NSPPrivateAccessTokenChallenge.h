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
@property (readonly) char isSupportedTokenType;
@property (readonly) char typeRequiresOriginName;
@property (readonly) char typeRequiresRedemptionNonce;
@property (readonly) char typeHasAllowedOriginList;

+ (id)challengeAttributeName;
+ (id)httpAuthenticationScheme;
+ (id)originNameKeyAttributeName;
+ (id)tokenKeyAttributeName;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initRSABlindSignatureChallengeWithIssuerName:(id)a0 redemptionNonce:(id)a1 originNames:(id)a2;
- (id)initRateLimitedRSABlindSignatureChallengeWithIssuerName:(id)a0 redemptionNonce:(id)a1 originNames:(id)a2;

@end
