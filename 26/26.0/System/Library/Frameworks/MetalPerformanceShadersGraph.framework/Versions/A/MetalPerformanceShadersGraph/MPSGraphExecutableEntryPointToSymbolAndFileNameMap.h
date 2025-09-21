@class NSDictionary;

@interface MPSGraphExecutableEntryPointToSymbolAndFileNameMap : MPSGraphObject

@property (readonly) NSDictionary *perEntryPointMap;

- (BOOL)isEqualTo:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPerEntryPointMap:(id)a0;
- (BOOL)isEqualToPerEntryPointMap:(id)a0;

@end
