@class OSADocumentationDefinition;

@interface OSAEnumerationDefinition : OSADefinition {
    OSADocumentationDefinition *_documentation;
}

- (id)init;
- (void)dealloc;
- (id)itemKind;
- (id)documentation;
- (void)setDocumentation:(id)a0;
- (id)itemIcon;

@end
