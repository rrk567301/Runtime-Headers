@class NSString, NSMutableData, NSURLConnection, NSURLRequest;

@interface SearchUIYQLRequest : NSObject <NSURLConnectionDelegate> {
    NSURLConnection *_connection;
    NSURLRequest *_request;
    NSMutableData *_rawData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)appendDebugString:(id)a0;
+ (void)saveDebugString;
+ (void)setShouldGenerateOfflineData:(BOOL)a0;
+ (BOOL)shouldGenerateOfflineData;

- (void)failWithError:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)parseData:(id)a0;
- (BOOL)isLoading;
- (void)didParseData;
- (void)failToParseWithData:(id)a0;
- (id)aggregateDictionaryDomain;
- (id)objectWithDictionaryKeyPath:(id)a0 inJSONObject:(id)a1;
- (id)dictionaryWithDictionaryKeyPath:(id)a0 inJSONObject:(id)a1;
- (id)arrayWithDictionaryKeyPath:(id)a0 inJSONObject:(id)a1 wrapResultIfDictionary:(BOOL)a2;
- (id)objectOfClass:(Class)a0 withDictionaryKeyPath:(id)a1 inJSONObject:(id)a2;
- (id)YQLCountryCode;
- (id)YQLLanguageCode;

@end
