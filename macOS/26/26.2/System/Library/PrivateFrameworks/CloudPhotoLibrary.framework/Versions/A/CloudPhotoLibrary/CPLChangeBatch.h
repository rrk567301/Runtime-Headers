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
- (id)redactedDescription;
- (unsigned long long)count;
- (id)initWithCoder:(id)a0;
- (unsigned long long)estimatedBatchSize;
- (id)cplFullDescription;
- (BOOL)hasChangeWithScopedIdentifier:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)_initWithRecords:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;
- (id)localResourceOfType:(unsigned long long)a0 forItemWithCloudScopedIdentifier:(id)a1;
- (void)appendLocalResources:(id)a0 forItemWithCloudScopedIdentifier:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)extractInitialDownloadBatch:(id *)a0 shouldConsiderRecordFilter:(id /* block */)a1;
- (void).cxx_destruct;
- (id)description;
- (void)removeRecordWithScopedIdentifier:(id)a0;
- (id)summaryDescription;
- (void)_setAdditionalRecords:(id)a0;
- (void)_addAdditionalRecord:(id)a0;
- (void)_addChange:(id)a0 resultBatch:(id)a1 changesPerScopedIdentifier:(id)a2 changesPerClass:(id)a3;
- (void)addRecordsFromBatch:(id)a0;
- (id)filterScopeChangeFromBatch;
- (id)recordWithScopedIdentifier:(id)a0;
- (BOOL)sortBatchWithError:(id *)a0;
- (id)_descriptionRedacted:(BOOL)a0;
- (id)init;
- (void)_setRecords:(id)a0;
- (id)initWithRecords:(id)a0;
- (id)_additionalRecords;
- (id)additionalRecordWithScopedIdentifier:(id)a0;

@end
