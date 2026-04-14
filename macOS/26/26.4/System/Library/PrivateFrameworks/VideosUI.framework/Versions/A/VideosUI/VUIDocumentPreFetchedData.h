@class NSDictionary;

@interface VUIDocumentPreFetchedData : NSObject

@property (copy, nonatomic) NSDictionary *prefetchedDataDict;

- (id)jsonData;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
