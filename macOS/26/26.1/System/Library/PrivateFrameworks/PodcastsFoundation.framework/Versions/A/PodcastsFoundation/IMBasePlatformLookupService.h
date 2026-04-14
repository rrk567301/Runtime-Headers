@class NSString;

@interface IMBasePlatformLookupService : IMBaseStoreService

@property (retain, nonatomic) NSString *protocolVersion;

- (id)urlRequest;
- (void)performRequest:(id /* block */)a0;
- (void).cxx_destruct;
- (id)baseUrl;
- (id)init;
- (id)platformAction;

@end
