@class NSString, NSNumber, NSArray;

@interface VUIDocumentPreFetchedDataPlaybackUpNext : VUIDocumentPreFetchedData

@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *showID;
@property (copy, nonatomic) NSString *adamID;
@property (copy, nonatomic) NSNumber *seasonNumber;
@property (copy, nonatomic) NSArray *excludedCanonicals;
@property (nonatomic) char updateEvent;
@property (nonatomic) char canAutoPlay;
@property (nonatomic) char isPostPlay;
@property (nonatomic) char isLiveStream;
@property (nonatomic) char refetchUpNextData;

- (void).cxx_destruct;
- (id)jsonData;

@end
