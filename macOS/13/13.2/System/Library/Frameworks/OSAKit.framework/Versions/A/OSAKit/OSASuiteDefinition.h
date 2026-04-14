@class OSADocumentationDefinition, NSMutableArray;

@interface OSASuiteDefinition : OSADefinition {
    NSMutableArray *_typeDefinitions;
    NSMutableArray *_classDefinitions;
    NSMutableArray *_commandDefinitions;
    NSMutableArray *_eventDefinitions;
    OSADocumentationDefinition *_documentation;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)itemKind;
- (id)documentation;
- (void)setDocumentation:(id)a0;
- (BOOL)isExpandable;
- (id)itemIcon;
- (id)classDefinitions;
- (void)setClassDefinitions:(id)a0;
- (BOOL)isOutlinable;
- (id)typeDefinitions;
- (void)setTypeDefinitions:(id)a0;
- (id)commandDefinitions;
- (void)setCommandDefinitions:(id)a0;
- (id)eventDefinitions;
- (void)setEventDefinitions:(id)a0;
- (void)addClassDefinition:(id)a0;
- (void)addCommandDefinition:(id)a0;
- (void)addEventDefinition:(id)a0;

@end
