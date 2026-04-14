@class NSDictionary;

@interface NUSourceDefinition : NSObject

@property (copy, nonatomic) NSDictionary *sourceOptions;

- (void).cxx_destruct;
- (long long)mediaType;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end
