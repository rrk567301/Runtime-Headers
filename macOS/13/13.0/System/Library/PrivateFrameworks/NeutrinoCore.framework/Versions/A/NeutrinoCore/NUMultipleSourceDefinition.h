@class NSArray;

@interface NUMultipleSourceDefinition : NUSourceDefinition

@property (readonly) NSArray *sourceDefinitions;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (long long)mediaType;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;
- (id)initWithSourceDefinitions:(id)a0;

@end
