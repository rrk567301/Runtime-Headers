@class NSMutableArray, TSWPStorage;

@interface TSWPOverlappingFieldsWrapper : NSObject {
    NSMutableArray *_fields;
    TSWPStorage *_parentStorage;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addField:(id)a0;
- (id)fields;
- (char)hasField:(id)a0;
- (id)copyWithContext:(id)a0;
- (void)removeField:(id)a0;
- (id)parentStorage;
- (void)setParentStorage:(id)a0;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (id)findFieldWithTextAttributeUUIDString:(id)a0;
- (unsigned long long)indexOfField:(id)a0;
- (id)initWithField:(id)a0 parentStorage:(id)a1;
- (id)initWithFields:(id)a0 parentStorage:(id)a1;
- (char)isEqualToOverlappingFieldWrapper:(id)a0;
- (char)isEquivalentToObject:(id)a0;
- (void)resetTextAttributeUUIDString;
- (void)sortWithContext:(void *)a0;
- (unsigned long long)sortedSearchForIndexOfField:(id)a0;

@end
