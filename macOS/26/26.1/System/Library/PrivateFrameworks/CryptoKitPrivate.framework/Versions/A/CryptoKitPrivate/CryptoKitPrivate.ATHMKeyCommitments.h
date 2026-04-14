@interface CryptoKitPrivate.ATHMKeyCommitments : NSObject

+ (id)getKeyIDWithKeyCommitmentsData:(id)a0;
+ (BOOL)verifyWithKeyCommitmentsData:(id)a0 numBuckets:(long long)a1 deploymentID:(id)a2;

- (id)init;

@end
