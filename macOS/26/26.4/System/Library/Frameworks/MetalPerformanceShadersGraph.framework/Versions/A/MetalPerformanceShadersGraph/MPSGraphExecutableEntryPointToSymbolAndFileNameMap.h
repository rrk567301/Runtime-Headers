@class NSDictionary;

@interface MPSGraphExecutableEntryPointToSymbolAndFileNameMap : MPSGraphObject

@property (readonly) NSDictionary *perEntryPointMap;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualTo:(id)a0;
- (id)description;
- (id)initWithPerEntryPointMap:(id)a0;
- (BOOL)isEqualToPerEntryPointMap:(id)a0;

@end
