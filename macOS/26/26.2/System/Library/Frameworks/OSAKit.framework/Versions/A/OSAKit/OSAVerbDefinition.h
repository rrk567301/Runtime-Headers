@class OSADocumentationDefinition, NSMutableArray;

@interface OSAVerbDefinition : OSADefinition {
    NSMutableArray *_parameterDefinitions;
    OSADocumentationDefinition *_documentation;
}

- (id)init;
- (void)dealloc;
- (id)documentation;
- (void)setDocumentation:(id)a0;
- (void)addParameterDefinition:(id)a0;
- (id)parameterDefinitions;
- (void)setParameterDefinitions:(id)a0;

@end
