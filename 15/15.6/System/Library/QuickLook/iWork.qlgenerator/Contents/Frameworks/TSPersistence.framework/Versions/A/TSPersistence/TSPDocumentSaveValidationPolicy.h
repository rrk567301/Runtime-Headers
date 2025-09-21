@interface TSPDocumentSaveValidationPolicy : NSObject

@property (readonly, nonatomic) char validateDataCRC;
@property (readonly, nonatomic) char validateDataDigest;
@property (readonly, nonatomic) char scanForOSLikeCorruption;
@property (readonly, nonatomic) long long corruptedDataFailToSaveMitigationPolicy;
@property (readonly, nonatomic) long long corruptedDataRemovalMitigationPolicy;
@property (readonly, nonatomic) char updateDataModificationDate;
@property (readonly, nonatomic) char failToSaveIfUpdateDataModificationDateFails;

+ (id)saveValidationPolicyWithValidateDataCRC:(char)a0 validateDataDigest:(char)a1 scanForOSLikeCorruption:(char)a2 corruptedDataFailToSaveMitigationPolicy:(long long)a3 corruptedDataRemovalMitigationPolicy:(long long)a4 updateDataModificationDate:(char)a5 failToSaveIfUpdateDataModificationDateFails:(char)a6;

- (id)description;
- (id)initWithValidateDataCRC:(char)a0 validateDataDigest:(char)a1 scanForOSLikeCorruption:(char)a2 corruptedDataFailToSaveMitigationPolicy:(long long)a3 corruptedDataRemovalMitigationPolicy:(long long)a4 updateDataModificationDate:(char)a5 failToSaveIfUpdateDataModificationDateFails:(char)a6;

@end
