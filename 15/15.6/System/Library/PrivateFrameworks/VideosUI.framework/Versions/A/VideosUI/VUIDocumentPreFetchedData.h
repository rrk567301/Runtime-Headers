@class NSDictionary;

@interface VUIDocumentPreFetchedData : NSObject

@property (copy, nonatomic) NSDictionary *prefetchedDataDict;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)jsonData;

@end
