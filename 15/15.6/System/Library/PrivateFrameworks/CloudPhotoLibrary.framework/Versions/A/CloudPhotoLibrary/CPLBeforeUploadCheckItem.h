@class CPLRecordChange, NSString, CPLBeforeUploadCheckItems, NSMutableDictionary, CPLScopedIdentifier, CPLRecordTarget, NSMutableSet, CPLResourceTypeSet, CPLFingerprintContext;

@interface CPLBeforeUploadCheckItem : NSObject {
    NSMutableSet *_rulesForRecordFetch;
    NSMutableDictionary *_rulesForOtherRecordFetches;
    char _hasCachedResultOfServerCheck;
    char _recordExistsOnServer;
    CPLRecordChange *_recordOnServer;
    char _checked;
    NSString *_dropReason;
    CPLResourceTypeSet *_resourcesToGenerateImageDerivatives;
    CPLResourceTypeSet *_resourcesToGenerateVideoComplementDerivatives;
    char _needsToGenerateImageDerivatives;
    char _needsToGenerateVideoComplementDerivatives;
}

@property (class, nonatomic) char allowsAssetsWithResourcesButNoAdjustments;

@property (readonly, nonatomic) long long ruleGroups;
@property (readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (readonly, nonatomic) CPLRecordChange *change;
@property (readonly, nonatomic) Class changeClass;
@property (readonly, nonatomic) char isAsset;
@property (readonly, nonatomic) char isTrashedOrDeletedAsset;
@property (readonly, nonatomic) char needsToGenerateDerivatives;
@property (readonly, nonatomic) CPLFingerprintContext *fingerprintContext;
@property (readonly, weak, nonatomic) CPLBeforeUploadCheckItems *items;
@property (readonly, nonatomic) char hasRequestedRecordFetch;
@property (readonly, nonatomic) unsigned long long estimatedResourceUploadSize;
@property (readonly, nonatomic) unsigned long long pushRepositoryPriority;
@property (readonly, nonatomic) CPLRecordTarget *target;

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (char)_addRelatedRecordWithScopedIdentifierToAdditionalRecords:(id)a0 provider:(id)a1 error:(id *)a2;
- (void)_bumpPushRepositoryPriority:(unsigned long long)a0 reason:(id)a1;
- (void)_dropChangeWithReason:(id)a0;
- (char)_forAdditionalRecordRule:(id)a0 check:(void /* function */ *)a1 error:(id *)a2;
- (char)_forRule:(id)a0 check:(void /* function */ *)a1 error:(id *)a2;
- (char)_serverResourcesMatches:(id)a0;
- (char)checkBeforeUploadWithError:(id *)a0;
- (void)dropChangeWithReason:(id)a0;
- (char)dropGeneratingDerivativesIfPossibleWithRecordOnServer:(id)a0 error:(id *)a1;
- (void)dropResourceChangeWithReason:(id)a0;
- (void)dropSharingChangeWithReason:(id)a0;
- (id)initWithChange:(id)a0 checkItems:(id)a1;
- (char)prepareWithError:(id *)a0;
- (void)reinjectChangeWithReason:(id)a0;
- (char)rejectChangeWithReason:(id)a0 error:(id *)a1;
- (char)requestFetchForRule:(id)a0 error:(id *)a1;
- (char)requestFetchOfRecordWithScopedIdentifier:(id)a0 forRule:(id)a1 error:(id *)a2;
- (void)updatePushRepositoryPriorityWithRecordOnServer:(id)a0;

@end
