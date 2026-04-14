@class BCSBusinessQueryService;

@interface DIWebPresentmentBrandStore : NSObject {
    BCSBusinessQueryService *_queryService;
}

- (void).cxx_destruct;
- (id)init;
- (void)brandWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)permissionsForBrandWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
