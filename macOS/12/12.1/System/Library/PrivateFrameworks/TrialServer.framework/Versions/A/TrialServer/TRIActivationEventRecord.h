@class NSString;

@interface TRIActivationEventRecord : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *parentId;
@property (readonly, nonatomic) NSString *factorPackSetId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *osBuild;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *regionCode;

+ (id)recordWithParentId:(id)a0 factorPackSetId:(id)a1 deploymentId:(int)a2 osBuild:(id)a3 languageCode:(id)a4 regionCode:(id)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToRecord:(id)a0;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (id)copyWithReplacementFactorPackSetId:(id)a0;
- (id)initWithParentId:(id)a0 factorPackSetId:(id)a1 deploymentId:(int)a2 osBuild:(id)a3 languageCode:(id)a4 regionCode:(id)a5;
- (id)copyWithReplacementParentId:(id)a0;
- (id)copyWithReplacementOsBuild:(id)a0;
- (id)copyWithReplacementLanguageCode:(id)a0;
- (id)copyWithReplacementRegionCode:(id)a0;

@end
