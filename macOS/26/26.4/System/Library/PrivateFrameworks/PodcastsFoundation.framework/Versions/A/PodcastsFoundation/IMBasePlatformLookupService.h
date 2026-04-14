@class NSString;

@interface IMBasePlatformLookupService : IMBaseStoreService

@property (retain, nonatomic) NSString *protocolVersion;

- (void).cxx_destruct;
- (id)init;
- (id)urlRequest;
- (void)performRequest:(id /* block */)a0;
- (id)baseUrl;
- (id)platformAction;

@end
