@class NSString;

@interface SUOSUCatalogConfiguration : NSObject

@property (retain) NSString *catalogHostName;
@property (retain) NSString *managedByOrganizationName;
@property unsigned long long catalogConfigurationType;
@property unsigned long long seedConfigurationType;
@property (retain) NSString *pallasAudienceID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCatalogHostName:(id)a0 managedByOrganizationName:(id)a1 configurationType:(unsigned long long)a2 seedType:(unsigned long long)a3 pallasAudienceID:(id)a4;

@end
