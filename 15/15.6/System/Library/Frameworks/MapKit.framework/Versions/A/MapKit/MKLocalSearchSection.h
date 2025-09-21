@class NSArray, NSString;

@interface MKLocalSearchSection : NSObject

@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) char shouldInterleaveClientResults;
@property (readonly, nonatomic) char enforceServerResultsOrder;
@property (readonly, nonatomic) char enableMapsSuggestServerReranking;
@property (readonly, nonatomic) char isSectionForClientOnlyResults;
@property (readonly, nonatomic) NSArray *includedClientResultTypes;
@property (readonly, nonatomic) NSArray *excludedClientResultTypes;

- (void).cxx_destruct;
- (id)initWithResults:(id)a0 title:(id)a1 shouldInterleaveClientResults:(char)a2 enforceServerResultsOrder:(char)a3 enableMapsSuggestServerReranking:(char)a4 isSectionForClientOnlyResults:(char)a5 includedClientResultTypes:(id)a6 excludedClientResultTypes:(id)a7;

@end
