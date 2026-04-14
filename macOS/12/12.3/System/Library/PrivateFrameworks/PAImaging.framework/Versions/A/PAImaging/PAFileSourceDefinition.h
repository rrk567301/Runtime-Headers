@class PAImageRequestCacheHint;

@interface PAFileSourceDefinition : NUFileSourceDefinition

@property (retain) PAImageRequestCacheHint *cacheHint;

- (void).cxx_destruct;
- (id)generateSourceNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end
