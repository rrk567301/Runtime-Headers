@class NSString, NSArray;

@interface VUIDocumentPreFetchedDataMoreGames : VUIDocumentPreFetchedData

@property (nonatomic) BOOL isMultiviewPlayer;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) BOOL playFromStart;
@property (nonatomic) BOOL includeMultiviewButton;
@property (retain, nonatomic) NSArray *excludedCanonicals;

- (void).cxx_destruct;
- (id)jsonData;

@end
