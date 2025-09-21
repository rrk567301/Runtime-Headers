@class NSArray;

@interface ABMetadataMarkViewedOperation : ABMetadataOperation {
    NSArray *_uniqueIds;
    BOOL _oneShot;
}

- (void)main;
- (void).cxx_destruct;
- (unsigned long long)metadataJobType;
- (void)_markViewedForPeople:(id)a0;
- (id)initWithMetadataManager:(id)a0 recordUniqueIds:(id)a1;
- (void)markOneShot;

@end
