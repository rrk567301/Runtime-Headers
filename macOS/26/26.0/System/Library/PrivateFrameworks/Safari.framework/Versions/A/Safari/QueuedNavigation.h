@class NSURL, NSURLRequest, NSDictionary;

@interface QueuedNavigation : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSURLRequest *urlRequest;
@property (readonly, nonatomic) BOOL shouldLoadInNewProcess;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)sessionStateDataInLegacyQueuedNavigationDictionaryRepresentation:(id)a0;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithURLRequest:(id)a0 shouldLoadInNewProcess:(BOOL)a1;

@end
