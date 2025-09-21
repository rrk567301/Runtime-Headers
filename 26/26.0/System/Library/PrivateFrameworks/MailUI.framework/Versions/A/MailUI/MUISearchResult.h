@class NSArray, MUISearchRequestID, MUISearchInAllMailboxesSuggestion;

@interface MUISearchResult : NSObject

@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) MUISearchRequestID *requestID;
@property (readonly, nonatomic) unsigned char phraseKind;
@property (retain, nonatomic) MUISearchInAllMailboxesSuggestion *searchInAllMailboxesSuggestion;

- (void).cxx_destruct;

@end
