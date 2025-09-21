@class NSArray, NSString;

@interface _GEOPlaceSearchCompletionGroup : NSObject <GEOCompletionGroup>

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSString *localizedSectionHeader;
@property (readonly, nonatomic) char shouldInterleaveClientResults;
@property (readonly, nonatomic) char enforceServerResultsOrder;
@property (readonly, nonatomic) char enableMapsSuggestServerReranking;
@property (readonly, nonatomic) char isSectionForClientOnlyResults;
@property (readonly, nonatomic) NSArray *includedClientResultTypes;
@property (readonly, nonatomic) NSArray *excludedClientResultTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSection:(id)a0 traits:(id)a1 entryListIndex:(int)a2 mapItems:(id)a3 collections:(id)a4 publishers:(id)a5;

@end
