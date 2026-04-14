@class NSDictionary, NSURLSessionDataTask, NSURLSession;

@interface WBSOnDeviceSearchSuggestionsModelEndpointFetcher : NSObject {
    NSURLSessionDataTask *_dataTask;
    NSDictionary *_modelEndpointInfos;
    NSURLSession *_urlSession;
}

- (void).cxx_destruct;
- (id)init;
- (id)_parseEndpointsFromString:(id)a0;
- (void)fetchModelEndpointURLsWithCompletionHandler:(id /* block */)a0;

@end
