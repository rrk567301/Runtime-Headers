@interface ATXActionSuggestionMetadataClient : NSObject

@property (class, nonatomic, readonly) ATXActionSuggestionMetadataClient *shared;

- (id)init;
- (void).cxx_destruct;
- (id)fetchFormattedTitleForEncodedTool:(id)a0 summary:(id)a1 error:(id *)a2;
- (id)fetchFormattedTitlesForActions:(id)a0 error:(id *)a1;

@end
