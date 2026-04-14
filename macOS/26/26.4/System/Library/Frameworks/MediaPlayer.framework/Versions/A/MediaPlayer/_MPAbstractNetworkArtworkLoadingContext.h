@class NSURLSessionDataTask, NSMutableDictionary;

@interface _MPAbstractNetworkArtworkLoadingContext : NSObject

@property (retain, nonatomic) NSURLSessionDataTask *dataTask;
@property (readonly, nonatomic) NSMutableDictionary *catalogIdentifierToCompletionHandlerMap;

- (void).cxx_destruct;
- (id)init;

@end
