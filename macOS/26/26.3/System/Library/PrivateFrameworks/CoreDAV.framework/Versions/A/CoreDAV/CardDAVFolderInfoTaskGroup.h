@class NSSet;

@interface CardDAVFolderInfoTaskGroup : CoreDAVContainerInfoTaskGroup {
    NSSet *_directoryGatewayURLs;
}

- (id)_copyContainerWithURL:(id)a0 andProperties:(id)a1;
- (id)_copyContainerParserMappings;
- (void).cxx_destruct;
- (id)initWithAccountInfoProvider:(id)a0 containerURLs:(id)a1 directoryGatewayURLs:(id)a2 taskManager:(id)a3;
- (int)containerInfoDepthForURL:(id)a0;

@end
