@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup

@property (readonly, nonatomic) NSSet *addressBookHomes;
@property (readonly, nonatomic) NSSet *directoryGatewayURLs;

- (id)homeSet;
- (id)description;
- (void).cxx_destruct;
- (id)directoryGatewayURL;
- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)a0;

@end
