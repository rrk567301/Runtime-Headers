@class TUSearchController, NSMutableArray;

@interface TUAutocompleteResultPartitioner : NSObject

@property (retain, nonatomic) NSMutableArray *normalResultsArray;
@property (retain, nonatomic) NSMutableArray *foundInMailResultsArray;
@property (retain, nonatomic) NSMutableArray *foundOnServersResultsArray;
@property (weak) TUSearchController *searchController;

+ (char)sourceTypeIsFoundInMail:(unsigned long long)a0;
+ (char)sourceTypeIsFoundOnServers:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)searchResults;
- (void)addResult:(id)a0;

@end
