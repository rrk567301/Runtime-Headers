@interface MDMDeclarativeManagement : NSObject

+ (void)fetchDataAtURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_createUnsupportedFeatureError;
+ (void)executeRequestForEndpoint:(id)a0 channelType:(unsigned long long)a1 requestData:(id)a2 completionHandler:(id /* block */)a3;

@end
