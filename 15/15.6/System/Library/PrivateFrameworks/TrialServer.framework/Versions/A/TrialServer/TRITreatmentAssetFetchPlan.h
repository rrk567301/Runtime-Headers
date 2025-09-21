@class NSDictionary, TRIGenericUniqueRequiredAssets;

@interface TRITreatmentAssetFetchPlan : NSObject <NSCopying>

@property (readonly, nonatomic) TRIGenericUniqueRequiredAssets *metadataForRequestedUnlinkedAssets;
@property (readonly, nonatomic) NSDictionary *fetchPlansForTreatmentIds;

+ (id)planWithMetadataForRequestedUnlinkedAssets:(id)a0 fetchPlansForTreatmentIds:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementFetchPlansForTreatmentIds:(id)a0;
- (id)copyWithReplacementMetadataForRequestedUnlinkedAssets:(id)a0;
- (id)initWithMetadataForRequestedUnlinkedAssets:(id)a0 fetchPlansForTreatmentIds:(id)a1;
- (char)isEqualToPlan:(id)a0;

@end
