@class BCSBusinessQueryService;

@interface DIWebPresentmentBrandStore : NSObject {
    BCSBusinessQueryService *_queryService;
}

- (id)init;
- (void).cxx_destruct;
- (void)brandWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)permissionsForBrandWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
