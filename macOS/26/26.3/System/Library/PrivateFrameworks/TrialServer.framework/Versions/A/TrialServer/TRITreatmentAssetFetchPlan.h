@class NSDictionary, TRIGenericUniqueRequiredAssets;

@interface TRITreatmentAssetFetchPlan : NSObject <NSCopying>

@property (readonly, nonatomic) TRIGenericUniqueRequiredAssets *metadataForRequestedUnlinkedAssets;
@property (readonly, nonatomic) NSDictionary *fetchPlansForTreatmentIds;

+ (id)planWithMetadataForRequestedUnlinkedAssets:(id)a0 fetchPlansForTreatmentIds:(id)a1;

- (id)description;
- (id)init;
- (id)copyWithReplacementMetadataForRequestedUnlinkedAssets:(id)a0;
- (BOOL)isEqualToPlan:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMetadataForRequestedUnlinkedAssets:(id)a0 fetchPlansForTreatmentIds:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementFetchPlansForTreatmentIds:(id)a0;
- (unsigned long long)hash;

@end
