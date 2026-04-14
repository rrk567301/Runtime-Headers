@class NSString;

@interface AMSMediaTokenServicePATFetcher : NSObject <AMSMediaTokenServicePATFetcherProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)challengeDictFor:(id)a0;
+ (id)fetchToken:(id)a0 dispatchQueue:(id)a1;
+ (id)fetchTokenWithChallenge:(id)a0 dispatchQueue:(id)a1;
+ (id)fetcherWithChallenge:(id)a0 tokenKey:(id)a1;
+ (id)tokenChallengeWith:(id)a0 redemptionNonce:(id)a1 originName:(id)a2;


@end
