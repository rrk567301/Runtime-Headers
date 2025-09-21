@class NSDictionary;

@interface MPSGraphExecutableEntryPointToSymbolAndFileNameMap : MPSGraphObject

@property (readonly) NSDictionary *perEntryPointMap;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualTo:(id)a0;
- (id)initWithPerEntryPointMap:(id)a0;
- (char)isEqualToPerEntryPointMap:(id)a0;

@end
