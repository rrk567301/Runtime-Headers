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

+ (void)saveDebugString;
+ (void)appendDebugString:(id)a0;
+ (void)setShouldGenerateOfflineData:(BOOL)a0;
+ (BOOL)shouldGenerateOfflineData;

- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (void)cancel;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)parseData:(id)a0;
- (BOOL)isLoading;
- (id)YQLLanguageCode;
- (id)arrayWithDictionaryKeyPath:(id)a0 inJSONObject:(id)a1 wrapResultIfDictionary:(BOOL)a2;
- (id)YQLCountryCode;
- (id)aggregateDictionaryDomain;
- (id)dictionaryWithDictionaryKeyPath:(id)a0 inJSONObject:(id)a1;
- (void)didParseData;
- (void)failToParseWithData:(id)a0;
- (id)objectOfClass:(Class)a0 withDictionaryKeyPath:(id)a1 inJSONObject:(id)a2;
- (id)objectWithDictionaryKeyPath:(id)a0 inJSONObject:(id)a1;

@end
