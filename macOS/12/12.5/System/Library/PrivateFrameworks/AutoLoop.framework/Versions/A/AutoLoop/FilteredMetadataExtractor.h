@class NSMutableArray;

@interface FilteredMetadataExtractor : IrisVideoMetadataExtractor

@property (retain) NSMutableArray *filteredKeysArray;

- (id)init;
- (void).cxx_destruct;
- (void)removeMetadataFromInterpolatedFrameDict:(id)a0;
- (int)processFile;

@end
