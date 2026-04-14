@class NSArray;

@interface ABMetadataMarkViewedOperation : ABMetadataOperation {
    NSArray *_uniqueIds;
    BOOL _oneShot;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithMetadataManager:(id)a0 recordUniqueIds:(id)a1;
- (void)markOneShot;
- (int)metadataJobType;
- (void)_markViewedForPeople:(id)a0;

@end
