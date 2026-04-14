@class AXPSignpostParserConfiguration;

@interface AXPSignpostParser : NSObject

@property (copy, nonatomic) AXPSignpostParserConfiguration *configuration;

- (id)init;
- (void).cxx_destruct;
- (id)parseSignposts;
- (id)_signpostEventResultsFromSupportObjects:(id)a0;
- (id)_wrappedEventFromSignpostEvent:(id)a0;
- (id)_allSignpostObjectsFromTestArchiveWithSubsystemCategoryFilter:(id)a0 archivePath:(id)a1;

@end
