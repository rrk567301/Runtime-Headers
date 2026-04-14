@class NSArray;

@interface ABMetadataMarkViewedOperation : ABMetadataOperation {
    NSArray *_uniqueIds;
    BOOL _oneShot;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithMetadataManager:(id)a0 recordUniqueIds:(id)a1;
- (unsigned long long)metadataJobType;
- (void)markOneShot;
- (void)_markViewedForPeople:(id)a0;

@end
