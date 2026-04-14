@class NSString, NSDictionary, NSURL, NSData, NSMutableArray;

@interface NSPPrivateAccessTokenFetcher : NSObject {
    NSURL *_customAttester;
    NSDictionary *_customAttesterHeaders;
    NSData *_challengeData;
    NSData *_pairedChallengeData;
    NSData *_tokenKey;
    NSData *_originNameKey;
    NSMutableArray *_secondaryFetchers;
}

@property BOOL systemClient;
@property (retain) NSString *selectedOrigin;
@property struct { unsigned int val[8]; } auditToken;
@property (retain) NSString *bundleID;
@property (readonly) NSURL *customAttester;
@property (readonly) NSDictionary *customAttesterHeaders;

+ (BOOL)checkOriginAllowedAsThirdParty:(id)a0;

- (void).cxx_destruct;
- (void)addSecondaryChallenge:(id)a0 tokenKey:(id)a1 originNameKey:(id)a2;
- (void)fetchTokenWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithChallenge:(id)a0 tokenKey:(id)a1 originNameKey:(id)a2;
- (void)fetchLinkedTokenPairWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchTokenPairWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)initForKnownIssuerWithChallenge:(id)a0;
- (id)initForKnownIssuerWithLongLivedTokenChallenge:(id)a0 oneTimeTokenChallenge:(id)a1;
- (void)setCustomAttester:(id)a0 headers:(id)a1;

@end
