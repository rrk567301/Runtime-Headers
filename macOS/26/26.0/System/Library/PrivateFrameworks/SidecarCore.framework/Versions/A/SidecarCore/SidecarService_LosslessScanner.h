@interface SidecarService_LosslessScanner : SidecarService

+ (id)name;
+ (id)returnTypes;
+ (long long)minimumRapportVersion;

- (id)serviceIdentifier;
- (id)localizedDescription;
- (id)serviceExtension;
- (id)localizedItemName;
- (id)makeRequest;

@end
