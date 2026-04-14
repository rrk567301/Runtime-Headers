@class NSArray;

@interface NUMultipleSourceDefinition : NUSourceDefinition

@property (readonly) NSArray *sourceDefinitions;

- (long long)mediaType;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithSourceDefinitions:(id)a0;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end
