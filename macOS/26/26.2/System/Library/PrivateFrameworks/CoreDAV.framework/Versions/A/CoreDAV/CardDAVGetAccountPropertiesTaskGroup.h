@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup

@property (readonly, nonatomic) NSSet *addressBookHomes;
@property (readonly, nonatomic) NSSet *directoryGatewayURLs;

- (id)homeSet;
- (void)_setPropertiesFromParsedResponses:(id)a0;
- (id)_copyAccountPropertiesPropFindElements;
- (void).cxx_destruct;
- (id)description;
- (id)directoryGatewayURL;

@end
