@interface SidecarService_LosslessScanner : SidecarService

+ (id)returnTypes;
+ (id)name;
+ (long long)minimumRapportVersion;

- (id)localizedDescription;
- (id)symbolName;
- (id)serviceIdentifier;
- (id)serviceExtension;
- (id)localizedItemName;
- (id)makeRequest;

@end
