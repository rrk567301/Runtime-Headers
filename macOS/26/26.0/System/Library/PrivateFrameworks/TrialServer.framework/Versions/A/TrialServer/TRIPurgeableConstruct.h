@class NSString, NSSet;
@protocol TRIFactorPackId;

@interface TRIPurgeableConstruct : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIFactorPackId> *factorPackId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) NSSet *purgeableAssetFactorNames;

+ (id)constructWithFactorPackId:(id)a0 treatmentId:(id)a1 namespaceName:(id)a2 purgeableAssetFactorNames:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (id)copyWithReplacementTreatmentId:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementNamespaceName:(id)a0;
- (id)copyWithReplacementFactorPackId:(id)a0;
- (id)copyWithReplacementPurgeableAssetFactorNames:(id)a0;
- (id)initWithFactorPackId:(id)a0 treatmentId:(id)a1 namespaceName:(id)a2 purgeableAssetFactorNames:(id)a3;
- (BOOL)isEqualToConstruct:(id)a0;

@end
