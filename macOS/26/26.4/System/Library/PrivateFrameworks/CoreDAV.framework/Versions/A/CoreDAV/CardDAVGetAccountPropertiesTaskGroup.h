@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup

@property (readonly, nonatomic) NSSet *addressBookHomes;
@property (readonly, nonatomic) NSSet *directoryGatewayURLs;

- (id)_copyAccountPropertiesPropFindElements;
- (id)directoryGatewayURL;
- (void)_setPropertiesFromParsedResponses:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)homeSet;

@end
