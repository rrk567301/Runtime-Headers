@class NSIndexSet, CKRecordID;

@interface TRITreatmentRecordFetchPlan : NSObject <NSCopying>

@property (readonly, nonatomic) CKRecordID *recordId;
@property (readonly, nonatomic) NSIndexSet *assetIndexes;

+ (id)planWithRecordId:(id)a0 assetIndexes:(id)a1;

- (id)description;
- (id)init;
- (BOOL)isEqualToPlan:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementAssetIndexes:(id)a0;
- (id)copyWithReplacementRecordId:(id)a0;
- (id)initWithRecordId:(id)a0 assetIndexes:(id)a1;

@end
