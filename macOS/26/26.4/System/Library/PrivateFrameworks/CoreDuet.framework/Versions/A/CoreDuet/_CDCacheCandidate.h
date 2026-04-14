@class NSString;

@interface _CDCacheCandidate : NSObject

@property (retain, nonatomic) NSString *domainId;
@property (retain, nonatomic) NSString *derivedIntentId;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *recipientsId;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDomainId:(id)a0 derivedIntentId:(id)a1 bundleId:(id)a2 recipientsId:(id)a3;

@end
