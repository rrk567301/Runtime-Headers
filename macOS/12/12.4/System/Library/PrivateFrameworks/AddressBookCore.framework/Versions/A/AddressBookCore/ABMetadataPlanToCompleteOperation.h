@class NSArray;

@interface ABMetadataPlanToCompleteOperation : ABMetadataOperation {
    NSArray *_uniqueIds;
    int _jobType;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithMetadataManager:(id)a0 recordUniqueIds:(id)a1 jobType:(int)a2;
- (int)metadataJobType;

@end
