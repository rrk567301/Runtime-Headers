@class NSString;

@interface IMBasePlatformLookupService : IMBaseStoreService

@property (retain, nonatomic) NSString *protocolVersion;

- (void)performRequest:(id /* block */)a0;
- (id)urlRequest;
- (id)baseUrl;
- (id)init;
- (void).cxx_destruct;
- (id)platformAction;

@end
