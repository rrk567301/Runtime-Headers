@class NSString, NSDate;

@interface WBSTouchIconCacheSettingsEntry : NSObject <WBSSiteMetadataImageCacheSettingsEntry>

@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *UUIDString;
@property (readonly, nonatomic) NSDate *lastRequestDate;
@property (readonly, nonatomic) char lastRequestWasInUserLoadedWebpage;
@property (readonly, nonatomic) long long requestCount;
@property (readonly, nonatomic, getter=isIconInCache) char iconInCache;
@property (readonly, nonatomic) char requestDidSucceed;
@property (readonly, nonatomic) long long transparencyAnalysisResult;
@property (readonly, nonatomic) char higherPriorityIconDownloadFailedDueToNetworkError;
@property (readonly, nonatomic) long long lastResponseStatusCode;
@property (readonly, nonatomic) unsigned long long downloadStatusFlags;
@property (readonly, nonatomic) long long databaseID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryWithHost:(id)a0 lastRequestDate:(id)a1 lastRequestWasInUserLoadedWebpage:(char)a2 requestCount:(long long)a3 iconInCache:(char)a4 requestDidSucceed:(char)a5 lastResponseStatusCode:(long long)a6 transparencyAnalysisResult:(long long)a7 higherPriorityIconDownloadFailedDueToNetworkError:(char)a8 UUIDString:(id)a9;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSQLiteRow:(id)a0;
- (id)initWithHost:(id)a0;
- (id)entryByAddingRequestInUserLoadedWebPage:(char)a0 isIconInCache:(char)a1 requestDidSucceed:(char)a2 lastResponseStatusCode:(long long)a3 transparencyAnalysisResult:(long long)a4 higherPriorityIconDownloadFailedDueToNetworkError:(char)a5 UUIDString:(id)a6;
- (id)entryWithDatabaseID:(long long)a0;
- (id)entryWithTransparencyAnalysisResult:(long long)a0;
- (id)initWithHost:(id)a0 lastRequestDate:(id)a1 lastRequestWasInUserLoadedWebpage:(char)a2 requestCount:(long long)a3 iconInCache:(char)a4 requestDidSucceed:(char)a5 lastResponseStatusCode:(long long)a6 transparencyAnalysisResult:(long long)a7 higherPriorityIconDownloadFailedDueToNetworkError:(char)a8 UUIDString:(id)a9;

@end
