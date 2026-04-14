@interface SidecarService_LosslessScanner : SidecarService

+ (id)name;
+ (id)returnTypes;
+ (long long)minimumRapportVersion;

- (id)localizedDescription;
- (id)serviceExtension;
- (id)serviceIdentifier;
- (id)symbolName;
- (id)localizedItemName;
- (id)makeRequest;

@end
