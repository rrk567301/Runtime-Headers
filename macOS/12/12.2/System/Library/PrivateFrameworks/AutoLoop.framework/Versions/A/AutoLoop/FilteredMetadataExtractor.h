@class NSMutableArray;

@interface FilteredMetadataExtractor : IrisVideoMetadataExtractor

@property (retain) NSMutableArray *filteredKeysArray;

- (id)init;
- (void).cxx_destruct;
- (int)processFile;

@end
