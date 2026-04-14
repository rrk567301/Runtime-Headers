@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CPLChangeBatch : NSObject <NSSecureCoding, NSCopying, NSFastEnumeration, NSCopying> {
    NSMutableArray *_records;
    NSMutableDictionary *_additionalRecords;
    NSMutableDictionary *_localResources;
    BOOL _calculateEstimatedBatchSize;
    unsigned long long _estimatedBatchSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *records;

- (void)addRecord:(id)a0;
- (unsigned long long)count;
- (id)summaryDescription;
- (id)initWithRecords:(id)a0;
- (void)_setRecords:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)addRecordsFromBatch:(id)a0;
- (id)description;
- (id)init;
- (void)_addChange:(id)a0 resultBatch:(id)a1 changesPerScopedIdentifier:(id)a2 changesPerClass:(id)a3;
- (id)_initWithRecords:(id)a0;
- (id)additionalRecordWithScopedIdentifier:(id)a0;
- (void)appendLocalResources:(id)a0 forItemWithCloudScopedIdentifier:(id)a1;
- (unsigned long long)estimatedBatchSize;
- (BOOL)hasChangeWithScopedIdentifier:(id)a0;
- (id)filterScopeChangeFromBatch;
- (BOOL)sortBatchWithError:(id *)a0;
- (void)_setAdditionalRecords:(id)a0;
- (void).cxx_destruct;
- (id)localResourceOfType:(unsigned long long)a0 forItemWithCloudScopedIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)cplFullDescription;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_addAdditionalRecord:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_descriptionRedacted:(BOOL)a0;
- (void)removeRecordWithScopedIdentifier:(id)a0;
- (id)recordWithScopedIdentifier:(id)a0;
- (id)_additionalRecords;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)extractInitialDownloadBatch:(id *)a0 shouldConsiderRecordFilter:(id /* block */)a1;

@end
