@class NSString, MAAssetQuery;

@interface SFDeviceQueryParameters : NSObject

@property (readonly, nonatomic) MAAssetQuery *maQuery;
@property (readonly, nonatomic) char installedOnly;
@property (readonly, nonatomic) char imperfectMatch;
@property (readonly, nonatomic) char fallback;
@property (readonly, nonatomic) NSString *queryType;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeviceAssetQuery:(id)a0 installedOnly:(char)a1 imperfectMatch:(char)a2 fallback:(char)a3;
- (id)maAssetQueryDescription;

@end
