@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup

@property (readonly, nonatomic) NSSet *addressBookHomes;
@property (readonly, nonatomic) NSSet *directoryGatewayURLs;

- (void)_setPropertiesFromParsedResponses:(id)a0;
- (id)homeSet;
- (id)_copyAccountPropertiesPropFindElements;
- (id)description;
- (id)directoryGatewayURL;
- (void).cxx_destruct;

@end
