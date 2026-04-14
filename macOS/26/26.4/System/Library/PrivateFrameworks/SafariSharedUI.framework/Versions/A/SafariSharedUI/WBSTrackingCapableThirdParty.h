@class NSString, NSArray;

@interface WBSTrackingCapableThirdParty : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSArray *firstParties;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDomain:(id)a0 firstParties:(id)a1;

@end
