@class NSMutableArray;

@interface FilteredMetadataExtractor : IrisVideoMetadataExtractor

@property (retain) NSMutableArray *filteredKeysArray;

- (void).cxx_destruct;
- (id)init;
- (int)processFile;
- (void)removeMetadataFromInterpolatedFrameDict:(id)a0;

@end
