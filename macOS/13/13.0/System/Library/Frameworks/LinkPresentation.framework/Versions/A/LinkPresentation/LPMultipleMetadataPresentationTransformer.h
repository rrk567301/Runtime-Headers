@class NSArray, NSDictionary;

@interface LPMultipleMetadataPresentationTransformer : NSObject {
    NSArray *_metadata;
    NSDictionary *_summaryCounts;
    BOOL _hasOnlyFiles;
}

@property (nonatomic) unsigned long long preferredSizeClass;

- (void).cxx_destruct;
- (id)summary;
- (id)summaryMetadata;
- (id)initWithMetadata:(id)a0;
- (id)_summaryCounts;
- (id)summaryImages;
- (id)_summarySubtitle;

@end
