@class NSString, NSArray;

@interface WBSTrackingCapableThirdParty : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSArray *firstParties;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 firstParties:(id)a1;

@end
