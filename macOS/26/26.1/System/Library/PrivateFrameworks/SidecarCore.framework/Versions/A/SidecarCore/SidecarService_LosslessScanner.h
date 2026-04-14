@interface SidecarService_LosslessScanner : SidecarService

+ (id)returnTypes;
+ (id)name;
+ (long long)minimumRapportVersion;

- (id)serviceIdentifier;
- (id)symbolName;
- (id)serviceExtension;
- (id)localizedDescription;
- (id)localizedItemName;
- (id)makeRequest;

@end
