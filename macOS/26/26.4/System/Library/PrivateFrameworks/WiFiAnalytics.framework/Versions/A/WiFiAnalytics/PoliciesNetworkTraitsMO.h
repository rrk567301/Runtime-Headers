@class NetworkMO;

@interface PoliciesNetworkTraitsMO : PoliciesMO

@property (retain, nonatomic) NetworkMO *network;

+ (id)fetchRequest;

@end
