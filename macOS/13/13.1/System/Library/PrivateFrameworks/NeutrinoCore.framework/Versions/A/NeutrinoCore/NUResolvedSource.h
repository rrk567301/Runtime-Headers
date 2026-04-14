@class NUSourceDefinition;

@interface NUResolvedSource : NUSource

@property (retain) NUSourceDefinition *resolvedSourceDefinition;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)sourceDefinition:(out id *)a0;

@end
