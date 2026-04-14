@class NSString, NSSet;
@protocol TRIFactorPackId;

@interface TRIPurgeableConstruct : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIFactorPackId> *factorPackId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) NSSet *purgeableAssetFactorNames;

+ (id)constructWithFactorPackId:(id)a0 treatmentId:(id)a1 namespaceName:(id)a2 purgeableAssetFactorNames:(id)a3;

- (id)copyWithReplacementTreatmentId:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithReplacementNamespaceName:(id)a0;
- (id)copyWithReplacementFactorPackId:(id)a0;
- (id)copyWithReplacementPurgeableAssetFactorNames:(id)a0;
- (id)initWithFactorPackId:(id)a0 treatmentId:(id)a1 namespaceName:(id)a2 purgeableAssetFactorNames:(id)a3;
- (BOOL)isEqualToConstruct:(id)a0;

@end
