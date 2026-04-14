@class NSDictionary;

@interface MPSGraphExecutableEntryPointToSymbolAndFileNameMap : MPSGraphObject

@property (readonly) NSDictionary *perEntryPointMap;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithPerEntryPointMap:(id)a0;
- (BOOL)isEqualToPerEntryPointMap:(id)a0;

@end
