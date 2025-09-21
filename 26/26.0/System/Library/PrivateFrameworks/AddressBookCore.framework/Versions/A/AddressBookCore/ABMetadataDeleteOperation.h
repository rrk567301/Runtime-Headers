@class NSArray, NSMutableArray;

@interface ABMetadataDeleteOperation : ABMetadataOperation {
    NSArray *_uniqueIds;
    NSMutableArray *_quantumBaseURLs;
}

- (void)main;
- (void).cxx_destruct;
- (unsigned long long)metadataJobType;
- (void)_deleteMetaDataForPeople:(id)a0 withLock:(BOOL)a1;
- (id)initWithMetadataManager:(id)a0 recordUniqueIds:(id)a1;

@end
