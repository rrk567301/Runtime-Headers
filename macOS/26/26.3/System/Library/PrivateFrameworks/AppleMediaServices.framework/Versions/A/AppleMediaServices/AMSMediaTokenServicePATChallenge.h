@class NSString, NSData;

@interface AMSMediaTokenServicePATChallenge : NSObject

@property (retain) NSString *issuerName;
@property (retain) NSString *originName;
@property (retain) NSData *tokenKey;
@property (retain) NSData *redemptionNonce;

+ (id)challengeWith:(id)a0;

- (void).cxx_destruct;

@end
