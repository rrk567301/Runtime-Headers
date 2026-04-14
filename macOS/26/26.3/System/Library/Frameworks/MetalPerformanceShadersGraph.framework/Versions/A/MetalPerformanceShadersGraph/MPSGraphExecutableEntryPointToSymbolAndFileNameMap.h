@class NSDictionary;

@interface MPSGraphExecutableEntryPointToSymbolAndFileNameMap : MPSGraphObject

@property (readonly) NSDictionary *perEntryPointMap;

- (BOOL)isEqualTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithPerEntryPointMap:(id)a0;
- (BOOL)isEqualToPerEntryPointMap:(id)a0;

@end
