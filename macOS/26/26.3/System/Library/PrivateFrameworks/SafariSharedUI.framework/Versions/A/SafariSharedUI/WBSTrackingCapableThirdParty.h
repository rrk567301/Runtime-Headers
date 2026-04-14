@class NSString, NSArray;

@interface WBSTrackingCapableThirdParty : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSArray *firstParties;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDomain:(id)a0 firstParties:(id)a1;

@end
