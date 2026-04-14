@class NSArray;

@interface NUMultipleSourceDefinition : NUSourceDefinition

@property (readonly) NSArray *sourceDefinitions;

- (id)description;
- (id)init;
- (long long)mediaType;
- (void).cxx_destruct;
- (id)initWithSourceDefinitions:(id)a0;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end
