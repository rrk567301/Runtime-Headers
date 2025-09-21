@class NSDictionary, TRIGenericUniqueRequiredAssets;

@interface TRITreatmentAssetFetchPlan : NSObject <NSCopying>

@property (readonly, nonatomic) TRIGenericUniqueRequiredAssets *metadataForRequestedUnlinkedAssets;
@property (readonly, nonatomic) NSDictionary *fetchPlansForTreatmentIds;

+ (id)planWithMetadataForRequestedUnlinkedAssets:(id)a0 fetchPlansForTreatmentIds:(id)a1;

- (BOOL)isEqualToPlan:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementMetadataForRequestedUnlinkedAssets:(id)a0;
- (id)init;
- (id)description;
- (id)initWithMetadataForRequestedUnlinkedAssets:(id)a0 fetchPlansForTreatmentIds:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementFetchPlansForTreatmentIds:(id)a0;
- (void).cxx_destruct;

@end
