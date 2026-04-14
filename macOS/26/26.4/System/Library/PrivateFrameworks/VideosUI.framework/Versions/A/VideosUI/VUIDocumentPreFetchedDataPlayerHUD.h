@class NSString, NSArray;

@interface VUIDocumentPreFetchedDataPlayerHUD : VUIDocumentPreFetchedData

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *tabId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *referenceId;
@property (nonatomic) BOOL isMultiviewPlayer;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) BOOL playFromStart;
@property (nonatomic) BOOL includeMultiviewButton;
@property (retain, nonatomic) NSArray *excludedCanonicals;
@property (retain, nonatomic) NSArray *multiviewIdentifiers;
@property (retain, nonatomic) NSArray *multiviewImages;
@property (nonatomic) BOOL isValidMultiviewWindowSize;
@property (copy, nonatomic) NSString *leagueId;

- (id)jsonData;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
